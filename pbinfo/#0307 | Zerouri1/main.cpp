#include <iostream>

using namespace std;

int main(){
    int n,x,p=1,c2=0,c5=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        while(x%2==0) {x=x/2; c2++;}
        while(x%5==0) {x=x/5; c5++;}
        p=p*(x%10)%10;
    }
    if(c5>c2)
        cout<<5;
    else{
        for(int i=1; i<=c2-c5;i++)
            p=p*2%10;
        cout<<p;
    }

    return 0;
}
