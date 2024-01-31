#include <iostream>
#include <fstream>
using namespace std;
int main(){
    long int a[101][101], n, m, i, j, C=0;
    string ins;
    ifstream in("vecini1.in");
    ofstream out("vecini1.out");
    in>>n>>m;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            in>>a[i][j];
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++){
            bool ok = true;
            int k = 0, v[4];
            if(i>1) v[k++] = a[i-1][j];
            if(j>1) v[k++] = a[i][j-1];
            if(i<n) v[k++] = a[i+1][j];
            if(j<m) v[k++] = a[i][j+1];
            for(int h1=0; h1<k; h1++)
                for(int h2=h1+1; h2<k; h2++)
                    if(v[h1]==v[h2]){
                        ok = false;
                        break;
                    }
            if(ok==true)
                C += 1;
        }
    out<<C;
}
