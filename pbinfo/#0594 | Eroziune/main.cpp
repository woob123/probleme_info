#include <iostream>

using namespace std;

int main(){
    bool a[102][102], b[102][102];
    int i, j, n, m, ku=0, k=0;
    cin>>n>>m;
    for(i=0; i<=n+1; i++)
        for(j=0; j<=m+1; j++)
            a[i][j] = 1;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++){
            cin>>a[i][j];
            if(a[i][j]==1)
                ku += 1;
        }
    for(int h=1; h<=ku; h++){
        for(i=0; i<=n+1; i++)
            for(j=0; j<=m+1; j++)
                b[i][j] = a[i][j];
        bool ok = false; 
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                if(a[i][j]==1){
                    int kvecinia = 0; 
                    if(a[i-1][j]==0)
                        kvecinia += 1;
                    if(a[i+1][j]==0)
                        kvecinia += 1;
                    if(a[i][j-1]==0)
                        kvecinia += 1;
                    if(a[i][j+1]==0)
                        kvecinia += 1;
                    if(kvecinia>=2)
                        b[i][j] = 0, ok = true; 
                }
            }
        }
        if(ok==true){
            k += 1;
            for(i=0; i<=n+1; i++)
                for(j=0; j<=m+1; j++)
                    a[i][j] = b[i][j];
        }
    }
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            if(a[i][j]==1){
                cout<<-1;
                return 0;
            }
    cout<<k;
}
