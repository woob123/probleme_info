#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("eureni.in");
ofstream fout("eureni.out");
int S,n,e,i,v[10],k,nr;
int main(){
    fin>>S>>n>>e;
    v[0]=1;
    for(i=1;i<=n;i++)
        v[i]=v[i-1]*e;
    for(i=n;i>=0;i--){
        k=S/v[i];
        if(k!=0){
            fout<<v[i]<<' '<<k<<endl;
            nr=nr+k;
            S=S-k*v[i];
            if(S==0)break;
        }
    }
   fout<<nr;
}
