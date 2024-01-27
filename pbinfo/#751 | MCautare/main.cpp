#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[101][101];
    int b[101];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    int k;
    cin >> k;
    for(int i = 1; i <= k; i++){   
        int x;
        cin >> x;
        bool ok = true;
        for(int j = 1; j <= n; j++){
            bool okcol = false;
            for(int l = 1; l <= m; l++){
                    if(a[j][l] == x){
                        okcol = true;
                        break;
                    }
                }
                if(okcol == false){
                    ok = false;
                }
            }
        if(ok)
            cout << "DA" << endl;
        else
            cout << "NU" << endl;
    }
}
