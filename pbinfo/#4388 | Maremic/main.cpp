#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n/2;++i)
        cout<<9;
    cout<<8;
    for(int i=n/2+1;i<=n;++i)
    cout<<9;
    return 0;
}
