#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cin >> n;
    int a[n][n], b[n][n];
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            cin >> a[i][j];
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            b[i][j] = a[n - j - 1][n - i - 1];
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j)
            cout << b[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
