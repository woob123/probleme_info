#include <fstream>
using namespace std;
ifstream cin("subgraf1.in");
ofstream cout("subgraf1.out");
bool a[101][101];
bool prim(int n){
    if(n <2 || (n%2 == 0 && n != 2))
        return false;
    for(int i = 3; i * i <= n; i+=2)
        if(n % i == 0)
            return false;
    return true;
}
int main() {
    int n, m;
    cin >> n;
    int x, y;
    while(cin >> x >> y) {
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (prim(i)) {
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
