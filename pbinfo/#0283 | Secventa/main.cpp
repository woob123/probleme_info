#include <fstream>
#include <vector>
using namespace std;
ifstream cin("secventa.in");
ofstream cout("secventa.out");
vector<int> a;
int l,lmax,p,u,smax,s,n,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int x = 1 ; x <= n ; x++){
        cin>>k;
        a.push_back(k);
    }
    s = a[0];
    l = 1;
    for(int x = 1 ; x < n ; x++){
        if(a[x] % 2 != a[x-1] % 2){
            l++;
            s += a[x];
        }
        else{
            if(l > lmax){
                lmax = l;
                smax = s;
                p = x-l+1;
                u = x;
            }
            else if(l == lmax){
                if(s >= smax){
                    lmax = l;
                    smax = s;
                    p = x-l+1;
                    u = x;
                }
            }
            l = 1;
            s = a[x];
        }
    }
    if(l > lmax){
        lmax = l;
        smax = s;
        p = n-l+1;
        u = n;
    }
    else if(l == lmax){
        if(s >= smax){
            lmax = l;
            smax = s;
            p = n-l+1;
            u = n;
        }
    }
    l = 1;
    s = a[n];
    cout<<p<<' '<<u;
}
