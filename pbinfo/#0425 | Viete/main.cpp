#include <iostream>
using namespace std;

int x = 3,n,k[11],p,s,a,b,c;
int main(){
    cin>>a>>b>>c>>n;
    s = -(b/a);
    p = c / a;
    k[1] = s;
    k[2] = s * s - 2 * p;
    while(n != 2){
        k[x] = s * k[x-1] - p * k[x-2];
        x++;
        n--;
    }
    cout<<k[x-1];
}
