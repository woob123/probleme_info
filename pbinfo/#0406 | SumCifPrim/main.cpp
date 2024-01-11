#include <bits/stdc++.h>
using namespace std;
int prim(int n){
    int d;
    if(n<2)
      return 0;
    for(d=2;d*d<=n;d++)
      if(n%d==0)
        return 0;
    return 1;
}
int main(){
    int n,x,i,s=0,nr=0;
    cin>>n;
    for(i=1;i<=n;i++){
      cin>>x;
      s=0;
      int cp=x;
      while(cp){
        s=s+cp%10;
        cp=cp/10;
      }
      if(prim(x)!=0 && prim(s)!=0)
        nr++;
    }
    cout<<nr;
    return 0;
}
