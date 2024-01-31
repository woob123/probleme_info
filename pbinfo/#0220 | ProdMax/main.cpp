#include <bits/stdc++.h>
using namespace std;
ifstream fin("prodmax.in");
ofstream fout("prodmax.out");
int n,k,m[101][101],maxi,sum,i,j,a,b,ok;
int main(){
    fin>>a>>b;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            fin>>m[i][j];
        }
    }
    for(i=1;i<=b;i++){
        sum=0;
        ok=1;
        for(j=1;j<=a;j++){
            if(m[j][i]==2&&ok==1)sum++;
            if(m[j][i]==0){sum=0;ok=0;}
        }
        m[i][1]=sum;
        if(maxi<sum)
            maxi=sum;
    }
    for(i=1;i<=b;i++){
        if(m[i][1]==maxi)
            fout<<i<<" ";
    }
    return 0;
}
