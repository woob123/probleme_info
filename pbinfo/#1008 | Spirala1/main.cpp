#include <fstream>
#include <cmath>
using namespace std;
ifstream f("spirala1.in");
ofstream g("spirala1.out");
int main(){
    int n,i,j,p,k,x;
    int a[101][101];
    f>>n;
    x=sqrt(n);
    p=x/2+x%2;
    for(k=1;k<=p;k++){
        for(i=k;i<=x-k+1;i++)
            f>>a[i][k];
        for(j=k+1;j<=x-k+1;j++)
            f>>a[x-k+1][j];
        for(i=x-k;i>=k;i--)
            f>>a[i][x-k+1];
        for(j=x-k;j>k;j--)
            f>>a[k][j];
    }
    for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            g<<a[i][j]<<" ";
        }
        g<<endl;
    }
    return 0;
}
