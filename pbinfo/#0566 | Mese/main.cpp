#include <iostream>
using namespace std;
int v[250][250], n, m;
int main(){
    int k = 0, sMax = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (v[i][j] == 1 && v[i - 1][j] == 0 && v[i][j - 1] == 0){
                k++;
                int x = j, y = i;
                while (v[i][x] == 1)
                    x++;
                while (v[y][j] == 1)
                    y++;
                if ((x - j) * (y - i) > sMax){
                    sMax = (x - j) * (y - i);
                }
            }
        }
    }
    cout << k << ' ' << sMax;
    return 0;
}
