#include <fstream>
using namespace std;
ifstream fin("maxd.in");
ofstream fout("maxd.out");
int nrdiv(int n){
    int nr = 1;
    int d = 2; 
    int p;
    while(n>1){
        p = 0;
        while(n%d==0){
            n/=d;
            p++;
        }

        if(p){
            nr = nr * (p+1);
        }
        d++;
        if(d*d > n && n > 1){
        d = n;
        }
    }
    return nr;
}
int main(){
    int a, b;
    int mindiv = 0;
    int maxdiv = 0;
    int cnt = 0;
    fin >> a >> b;
    for(int i = a; i <= b; i++){
        int d = nrdiv(i);
        if(d > maxdiv){
            mindiv = i;
            maxdiv = d;
            cnt=1;
        }
        else if(d == maxdiv){
            cnt++;
        }
    }
    fout << mindiv << " " << maxdiv << " " << cnt;
}
