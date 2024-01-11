#include <fstream>
#define ull unsigned long long
using namespace std;
ifstream fin("nrdiv.in");
ofstream fout("nrdiv.out");
ull nrdiv(ull n){ 
    ull d = 2;
    ull p;
    ull nr = 1;
    while(n > 1){
        p = 0;
        while(n%d == 0){
            p++;
            n/=d;
        }
        if(p){
            nr = nr * (p+1);
        }
        ++d;

        if(d*d > n && n > 1){
            d = n;
        }
    }
    return nr;
}
bool prim(ull n){
    if(n < 2 || (n%2==0 && n!=2))
        return false;
    for(ull i = 3; i*i <= n; i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    int n;
    fin >> n;
    for(int i = 1; i <= n; i++){
        ull x;
        fin >> x;
        if(prim(x))
            fout << 2 << '\n';
        else
            fout << nrdiv(x) << '\n';
    }
}
