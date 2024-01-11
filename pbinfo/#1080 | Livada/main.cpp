#include <fstream>
#include <algorithm>
#include <cmath>
#define NMAX 700005
using namespace std;
ifstream cin("livada.in");
ofstream cout("livada.out");
int v[NMAX],n,m,nr,p;
int maj(){
    int nmaj=v[1],ap=1;
    for(int i=2; i<=n; i++){
        if(v[i]==nmaj)
            ap++;
        else
            ap--;
        if(ap<0){
            nmaj=v[i];
            ap=1;
        }
    }
    ap=0;
    for(int i=1; i<=n; i++)
        if(v[i]==nmaj)
            ap++;
    if(ap>n/2)
        return 1;
    else
        return 0;
}
int secv(){
    int g=1,nmax=1;
    for(int i=2;i<=n;i++){
        if(v[i]==v[i-1])
         g++;
         else
            g=1;
         if(g>nmax)
            nmax=g;
    }
    return nmax;
}
int main(){
    int i,j,lmax=0,k;
    cin>>m>>n>>p;
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++)
            cin>>v[j];
        nr+=maj();
        k=secv();
        lmax=max(lmax,k);
    }
    cout<<nr<<"\n"<<lmax;
    return 0;
}
