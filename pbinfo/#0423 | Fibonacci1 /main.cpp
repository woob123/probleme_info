#include <iostream>
using namespace std;

int main()
{
    long long n, ncrt1=1, ncrt2=1;
    cin>>n;
    cout<<ncrt1<<" ";
    while(ncrt2<=n){
        cout<<ncrt2<<" ";
        long long aux = ncrt1;
        ncrt1 = ncrt2;
        ncrt2 = aux + ncrt2;
        }
}
