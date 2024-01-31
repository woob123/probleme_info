#include <iostream>
#include <fstream>
using namespace std;
ifstream in("spirala.in");
ofstream out("spirala.out");
int main() {
    int a[25][25], i, j, n;
    in>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            in>>a[i][j];
    int imin=0, imax=n-1, jmin=0, jmax=n-1;
    for(int k=1; k<=n/2; k++) {
        for(j=jmin; j<=jmax; j++)
            out<<a[imin][j]<<" ";
        imin += 1;
        for(i=imin; i<=imax; i++)
            out<<a[i][jmax]<<" ";
        jmax -= 1;
        for(j=jmax; j>=jmin; j--)
            out<<a[imax][j]<<" ";
        imax -= 1;
        for(i=imax; i>=imin; i--)
            out<<a[i][jmin]<<" ";
        jmin += 1;
    }
    if(n%2==1) {
         out<<a[n/2][n/2];
    }
}
