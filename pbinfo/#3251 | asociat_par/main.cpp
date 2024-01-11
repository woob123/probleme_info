#include <iostream>
using namespace std;

int main(){
    int n,x,c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        int p=1,a=0,ok=0;
        if(x==0) ok=1;
        while(x){
            if(x%2==0){
                a=a+x%10*p;
                p=p*10;
                ok=1;
            }
            x=x/10;
        }
        int r=0,b=a;
        while(b){
            r=r*10+b%10;
            b=b/10;
        }
        if(a==r && ok) c++;
    }
    cout<<c;
    return 0;
}
