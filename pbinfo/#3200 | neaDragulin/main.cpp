#include<iostream>
using namespace std;
int main(){
    long long n,k,p,x;
    cin>>n>>k;
    p=1;
    x=n;
    while(x>0){
        p=p*10;
        x=x/10;
    }
    x=n;
    while((k-1)%72>0){
        k--;
        n=((n%72)*(p%72)+x%72)%72;
    }
    cout<<n%72;
    return 0;
}
