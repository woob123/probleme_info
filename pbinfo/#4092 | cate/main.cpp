#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("cate.in");
ofstream cout("cate.out");
bool prim(int n){
    if(n == 0 || n == 1 || (n%2 == 0 && n != 2))
        return false;
    for(int i = 3; i * i <= n; i+=2)
        if(n%i == 0)
            return false;
    return true;
}
bool verif_pp(int rad, int n){
    return rad*rad == n;
}
int n, c;
int a, b;
int cnt2;
int prime[1010];
int main(){
    cin >> c >> n;
    if(c == 1){
        for(int i = 1; i <= n; i++){
            cin >> a >> b;
            if(a > b)
                swap(a, b);
            int rada = sqrt(a);
            int radb = sqrt(b);
            if(!verif_pp(rada, a)){
                rada++;
            }
            cout << radb - rada + 1 << '\n';
        }
    }
    else{
        int i, j, x, ra, rb; 
        for(i=2; i<=1000; ++i) 
            prime[i]=1; 
        for(i=2; i<=31; ++i) 
            for(j=i*i; j<=1000; j += i) 
                prime[j]=0; 
        for(i=1; i<=1000; ++i) 
            prime[i]+=prime[i-1]; 
        for(int i=1; i<=n; ++i) 
        { 
            cin>>a>>b; 
            if(a>b) 
                x=a, a=b, b=x; 
            ra=sqrt(a); 
            rb=sqrt(b); 
            if(ra*ra<a) ra++; 
            cout<<prime[rb]-prime[ra-1]<<'\n'; 
        } 
    }
}
