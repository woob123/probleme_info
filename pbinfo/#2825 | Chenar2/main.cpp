#include <iostream>

using namespace std;
bool chenar(int i, int j, int n, int m){
    return i == n || i == 1 || ((i != 1 && i != n) && (j == m || j == 1));
}
int main()
{
    int n, m, cnt = 0, x;
    int a[101][101];

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    cin >> x;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(chenar(i, j, n, m) && a[i][j] == x)
                cnt++;
        }
    }
    if(cnt == 0)
        cout << "NU";
    else
        cout << "DA";
}
