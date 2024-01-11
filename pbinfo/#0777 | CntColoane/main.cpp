#include <iostream>

using namespace std;

int main(){
    long int a[100][100], i, j, n, m, k=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin>>a[i][j];
    for(j=0; j<m; j++){
        bool ok = true;
        for(int i1=0; i1<n; i1++)
            for(int i2=i1+1; i2<n; i2++)
                if(a[i1][j] == a[i2][j]){
                    ok = false;
                    break;
                }
        if(ok==true)
            k += 1;
    }
    cout<<k;
}
