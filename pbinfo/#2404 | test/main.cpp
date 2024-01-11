#include <fstream>
#define mod 6669666
#define ll long long
using namespace std;
ifstream fin("test.in");
ofstream fout("test.out");
ll exp(ll a, ll b){
    ll p = 1;
    if(b == 1)
        return 1;
    while(b){
        a=a%mod;
        if(b%2==1)
            p =(p*a)%mod;
        b/=2;
        a = a*a;
    }
    return p;
}
int main(){
    int n;
    fin >> n;
    ll a[1001], b[1001];
    for(int i = 1; i <= n; i++)
        fin >> a[i];
    for(int i = 1; i <= n; i++)
        fin >> b[i];

    ll s = 0;
    for(int i = 1; i <= n; i++){
        s += exp(a[i], b[i]);
    }
    fout << s;
}
