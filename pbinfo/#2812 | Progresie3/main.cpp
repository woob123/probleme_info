#include <fstream>

using namespace std;

ifstream cin("progresie3.in");
ofstream cout("progresie3.out");

bool a[1005];
int v[1005];

int main(){
    int n,i,r,k=1;
    while(cin>>n)
        a[n]=1;
    for(i=0; i<=1000; i++)
        if(a[i]==1)
            v[k++]=i;
    r=v[2]-v[1];
    for(i=2; i<=k-1; i++)
        if(v[i]-v[i-1]!=r){
            cout<<"NU";
            return 0;
        }
    cout<<r;
    return 0;
}
