#include <bits/stdc++.h>

using namespace std;
void citire(int v[], int n)
{
    int i,j=0;
    for(i=1; i<=n; i++)

        cin>>v[i];

}
void ordonare(int v[], int n, int k)
{
    int i,p,j,aux;
    for(i=1;i<=k;i++)
    {
        for(j=i;j<n;j+=k)
        for(p=j+k;p<=n;p+=k)
        if(v[j]>v[p])
        {
            aux=v[j];
            v[j]=v[p];
            v[p]=aux;
        }

    }
}
void afisare(int v[], int n)
{
    int i;
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    int n, v[1001],div[1001],k;
    cin>>n>>k;
citire(v,n);
ordonare(v,n,k);
afisare(v,n);
    return 0;
}
