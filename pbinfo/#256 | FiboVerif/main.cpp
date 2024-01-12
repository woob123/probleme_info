#include <iostream>
using namespace std;

bool fibonacci(long int x)
{
    long int nr1=1, nr2=1, aux;
    while(nr1<=x)
    {
        aux = nr1;
        nr1 = nr2;
        nr2 += aux;
        if(nr1==x)
            return true;
    }
    return false;
}

int main()
{
    long int n, nr, v[10];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n; i++)
        if(fibonacci(v[i])==true)
            cout<<"DA"<<endl;
        else
            cout<<"NU"<<endl;
}
