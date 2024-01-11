#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    for(int i = 1; i < m; i++){
        for(int k = i + 1; k <= m; k++){
            if(a[1][i] > a[1][k]){
                for(int j = 1; j <= n; j++){
                    swap(a[j][i], a[j][k]);
                }
            }
        }
    }

    for(int i = 1; i <= n; i++, cout << endl)
        for(int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
}
