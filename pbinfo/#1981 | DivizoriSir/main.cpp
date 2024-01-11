#include <iostream>

using namespace std;
unsigned long long int n,x,pow,nr,k=1,d=2;

unsigned long long pow2[61];

int numara_divizori(unsigned long long  x){
    unsigned long long nrd=1,k=x,p=0;
    while(!(k&1))
        ++p,k>>=1;
    nrd=p+1;
    for(unsigned long long  d=3;d*d<=k;d+=2){
        p=0;
        while(k%d==0)
            ++p,k/=d;
        nrd*=p+1;
    }
    if(k>1)
        nrd*=2;
    return nrd;
}


int main(){
    cin>>n;
    pow2[0]=1;
    for(int i=1; i<n; i++)
        pow2[i]=pow2[i-1]*2;
    for(int i=0; i<n; i++)
        pow2[i]*=i;
    for(int i=0; i<n; i++)
        pow2[i]++;
    for(int i=0; i<n; i++)
        cout << numara_divizori(pow2[i]) << ' ';
}
