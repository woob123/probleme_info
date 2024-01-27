#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("interclasm.in");
ofstream cout("interclasm.out");
int a[100005],n, b[100005], m, c[200005], k,j = 1,x = 1,x1;
int main(){
    cin>>x1;
    cin>>n;
    for(int x = 1 ; x <= n ; x++)
        cin>>a[x];
    cin>>m;
    for(int x = 1; x <= m ; x++)
        cin>>b[x];
    while(x <= n && j <= m){
        if(a[x] < b[j]){
            if(a[x] % x1 == 0){
                c[k] = a[x];
                k++;
                x++;
            }
            else
                x++;
        }
        else{
            if(a[x] > b[j]){
                if(b[j] % x1 == 0){
                    c[k] = b[j];
                    k++;
                    j++;
                }
                else
                    j++;
            }
            else{
                x++;
                j++;
            }
        }
    }
    if(x <= n){
        while(x <= n)
            if(a[x] % x1 == 0){
                c[k] = a[x];
                k++;
                x++;
            }
            else
                x++;
    }
    else{
        while(j <= m){
            if(b[j] % x1 == 0){
                c[k] = b[j];
                k++;
                j++;
            }
            else
                j++;
        }
    }
    for(int x = 0 ; x < k ; x++)
        cout<<c[x]<<" ";
}
