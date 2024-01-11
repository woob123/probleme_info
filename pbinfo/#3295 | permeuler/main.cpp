#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("permeuler.in");
ofstream fout("permeuler.out");
int phi(int n){
    int p = n , d = 2;
    while(n > 1)
    {
        if(n % d == 0)
        {
            p = p / d * (d - 1);
            while(n % d == 0) n /= d;
        }
        d += (d & 1) ? 2 : 1;;
        if(d * d > n)
            d = n;
    }
    return p;
}
bool perm(int a, int b){
    if(a == b)
        return false;
    int v1[10], v2[10];
    while(a){
        v1[a%10]++;
        a/=10;
    }
    while(b){
        v2[b%10]++;
        b/=10;
    }
    for(int i = 0; i < 10; i++)
        if(v1[i] != v2[i])
            return false;
    return true;
}
int main(){
    int x, rasp = 0;
    bool ok = false;
    double mini = 100000000;
    while(fin >> x){
        int p = phi(x);
        if(perm(x, p)){
            ok = true;
            double frac = (double)(x)/p;
            if(frac < mini){
                mini = frac, rasp = x;
            }
        }
    }
    if(!ok)
        rasp = 0;
    fout << rasp;
}
