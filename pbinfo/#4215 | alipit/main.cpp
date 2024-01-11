#include <iostream>
using namespace std;
int main(){
    long long n, aux, c, m, nrc=0;
    bool ok=0;
    cin>>n;
    m=n;

    while(m!=0){
        nrc++;
        m/=10;
    }
    nrc/=2;
    long long p=10;
    while(nrc--){
        aux=n;
        c=aux%p;
        while(aux && c==aux%p)aux/=p;
        if(aux==0) ok=1;
        p*=10;
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;

}
