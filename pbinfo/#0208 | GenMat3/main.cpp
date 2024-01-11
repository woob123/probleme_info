#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int nr = 1;
    int a[21][21];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            a[i][j] = nr*nr;
            nr+=2;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
