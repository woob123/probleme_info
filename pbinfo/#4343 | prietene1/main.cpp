#include <bits/stdc++.h>
using namespace std;
const string file="prietene";
ifstream in(file+".in");
ofstream out(file+".out");
bool a[10000];
int prime[78500],k;
void ciur(){
    a[1]=a[0]=1;
    for(int i=2; i<=10000; i++)
        if(!a[i]){
            prime[++k]=i;
            for(int j=2; j*i<=10000; j++)
                a[i]=1;
        }
}
int nrdiv(int n){
    int q=0,kk=1;
    while(prime[kk]<=n and kk<=k and n>1){
        int p=0;
        while(n%prime[kk]==0)
            n/=prime[kk],p++;
        if(p) q++;
        kk++;

    }
    if(n>1)
        q++;
    return q;
}
int c,n,m,v1[10001],v2[10001],maxi,maxi1;
int f[101],f1[101],s;
int main(){
    in>>c>>n>>m;
    ciur();
    for(int i=1; i<=n; i++){
        in>>v1[i];
        if(nrdiv(v1[i])>maxi) maxi=nrdiv(v1[i]),maxi1=v1[i];
        else if(nrdiv(v1[i])==maxi&& v1[i]>maxi1)maxi1=v1[i];
        f[nrdiv(v1[i])]++;

    }
    for(int i=1; i<=m; i++){
        in>>v2[i];
        if(nrdiv(v2[i])>maxi) maxi=nrdiv(v2[i]),maxi1=v2[i];
        else if(nrdiv(v2[i])==maxi&& v2[i]>maxi1)maxi1=v2[i];
        f1[nrdiv(v2[i])]++;
    }
    if(c==1){
        out<<maxi1;
    }
    else{

        for(int i=1; i<=maxi; i++)
            s+=f[i]*f1[i];
        out<<s;
    }
    return 0;
}
