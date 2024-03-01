#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>
using namespace std;
int x,n,t,c,v[100001],p2[31],rsp;
map <int,int> mymap;
int main(){
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>v[i];
    p2[0]=1;
    for (int i=1;i<=30;i++)
        p2[i]=p2[i-1]*2;
    for (int i=1;i<=n;i++){
        for (int j=0;j<=30;j++)
            rsp=rsp+mymap[p2[j]-v[i]];
        mymap[v[i]]++;
    }
    cout<<rsp;
}
