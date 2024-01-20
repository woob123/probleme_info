#include <iostream>
using namespace std;
int main(){ 
    float a,b,c,i;
    cin>>a>>b>>c;
    if(a>b) i=a,a=b,b=i;
    if(a>c) i=a,a=c,c=i;
    if(b>c) i=b,b=c,c=i;
    if (a<(b+c) and b<(a+c) and c<(a+b) and a>0 and b>0 and c>0){
        if(a*a+b*b==c*c) cout<<"triunghi dreptunghic";
        else if(a*a+b*b>c*c) cout<<"triunghi ascutitunghic";
        else cout<<"triunghi obtuzunghic";
    }
    else cout<<"nu este triunghi"; 
    return 0;
}
