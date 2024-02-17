#include <iostream>
using namespace std;
bool chenar(int n,int m, int i, int j){
    return i == 1 || i == n || ((i != 1 && i != n) && (j == m || j == 1));
}
int main(){
    int n, m;
    cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(chenar(n, m, i, j))
                a[i][j] = a[n][m];
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
