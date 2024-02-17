#include <iostream>
using namespace std;

int main(){
    int a[100][100], n, m, i, j, aux;
    bool exista = false, ok;
    cin>>n>>m;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin>>a[i][j];
    for(j=0; j<m; j++){
        ok = true;
        aux = a[0][j];
        for(i=1; i<n; i++)
            if(a[i][j] != aux)
            {
                ok = false;
                break;
            }
        if(ok == true){
            cout << aux << " ";
            if(exista == false)
                exista = true;
        }
    }
    if(exista == false)
        cout << "nu exista";
}
