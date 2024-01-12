#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
///ifstream cin("divizori4.in");
///ofstream cout("divizori4.out");
///pair <int,int> x[1005];
int n,p,c,x[1005],v[1005],i,g,j;
int cif(int a)
{
    int k=2000000000;
    while(a!=0)
    {
        if(k>a%10)
            k=a%10;
        a=a/10;
    }
    return k;
}
int main()
{
    p=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x[i];
        v[++g]=cif(x[i]);
    }

    sort(v+1,v+g+1);
    for(j=1; j<=g; j++)
    {
        if(v[j]==0)
            c++;
        if(v[j]!=0)
        {
            cout<<v[j];
            if(p==0)
            {
                p=1;
                for(i=1; i<=c; i++)
                    cout<<0;
            }
        }
    }

        return 0;
    }
