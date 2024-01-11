#include <fstream>
#include <algorithm>
#include <climits>
using namespace std;
ifstream fin("grup.in");
ofstream fout("grup.out");
int f[10];
int primacf(int n){
    while(n>9)
        n/=10;
    return n;
}
int constr(int a){
    int rez = 0;
    short frec[10] = {0};
    while(a){
        frec[a%10]++;
        a/=10;
    }
    for(int i = 9; i >= 0; i--)
        if(frec[i] != 0)
            rez = rez * 10 + i;
    if(frec[0])
        rez *= 10;
    
    return rez;
}
int main(){
    int n, c;
    fin >> n >> c;
    int v[50000];
    for(int i = 0; i < n; i++)
        fin >> v[i];

    if(c == 1){
        for(int i = 0; i < n; i++)
            f[primacf(v[i])]++;

        int apmax = 0, ind = 0;
        for(int i = 0; i < 10; i++)
            if(f[i] > apmax)
                apmax = f[i], ind = i;

        int mini = INT_MAX; 
        for(int i = 0; i < n; i++)
            if(primacf(v[i]) == ind && v[i] < mini)
                mini = v[i];

        fout << mini;
        return 0;
    }
    else{
        int p[50000];
        for(int i = 0; i < n; i++){
            p[i] = constr(v[i]);
        }
        sort(p, p+n);
        int l = 1, lmax = 0;
        for(int i = n-1; i > 0; i--){
            if(p[i] == p[i-1])
                l++;
            else
                l = 1;
            if(l > lmax)
                lmax = l;
        }

        fout << lmax;
    }
}
