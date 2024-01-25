#include <bits/stdc++.h>
using namespace std;
ifstream fin("moretime.in");
ofstream fout("moretime.out");
int n,a[10005],b[100005],fr[100003],p;
pair<int,int> c[100005];
int Premium(int n){
    if(n%10==0) return 0;
    int x;
    x=n%10;
    while(n>9)
        n=n/10;
    if(x==n) return 1;
    return 0;
}
int main(){
    int x,y,s=0,s1,ct=0;
    fin>>n;
    for(int i=1; i<=n; i++){
        fin>>x>>y;
        if(Premium(x)){
            a[++p]=x;
            b[p]=y;
        }
    }
    fout<<p<<"\n";
    for(int i=1; i<=p; i++){
        s+=b[i]%p;
        c[i]={b[i]%p,a[i]};
    }
    s1=(s/p)*p;
    sort(c+1, c+p+1);
    for(int i=p; i>=1 && s>s1; i--)
        if(s-c[i].first>=s1){
            s-=c[i].first;
            ct++;
            fr[c[i].second]++;
        }
    fout<<p-ct<<"\n";
    for(int i=1; i<=p; i++)
        if(fr[a[i]]==0) fout<<a[i]<<" ";
    fin.close();
    fout.close();
    return 0;
}
