#include<iostream>
using namespace std;

int main()
{
    int v[1001],u[1001],aux,i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
        u[i]=i;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        {
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                aux=u[i];
                u[i]=u[j];
                u[j]=aux;
            }
        }
    for(i=1;i<=n;i++)
        cout<<u[i]<<" ";
}
