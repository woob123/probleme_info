#include <bits/stdc++.h>
using namespace std;
int main(){
   	long long nr=0,n,i, v[100005],l=1;
   	cin>>n;
 	for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=2;i<=n;i++)
        if(v[i]==v[i-1])
        	l++;
        else{
           	nr=nr+l*(l+1)/2;
           	l=1;
        }
    nr=nr+l*(l+1)/2;
    cout<<nr;
    return 0;
}
