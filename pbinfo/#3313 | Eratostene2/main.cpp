#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
ifstream cin("eratostene2.in");
ofstream cout("eratostene2.out");
int n,g, gmax, x[1000005];
int main(){
    x[0]=x[1]=0;
    for(int i=2;i<=1000000;i++){
        if(x[i]==0){
            x[i]=1;
            for(int j=2;j*i<=1000000;j++)
                x[i*j]++;
        }
    }
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>g;
        cout<<x[g]<<" ";
    }
    return 0;
}
