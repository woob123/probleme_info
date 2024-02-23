#include <iostream>
#include <vector>

using namespace std;
bool a[101][101];

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            for (int j = 1; j <= n; j++) {
                if(a[i][j] == 1){
                    a[i][j] = 0;
                    a[j][i] = 0;
                }
            }
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(a[i][j] == 1)
                cnt++;

    cout << cnt/2;
}
