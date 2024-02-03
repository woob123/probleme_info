#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n][n];
    for (int c = 0; c <= n / 2; c++) {
        for (int j = c; j < n - c; j++) {
            v[c][j] = c + 1;
        }
        for (int i = c + 1; i < n - c; i++) {
            v[i][n - c - 1] = c + 1;
        }
        for (int j = n - c - 2; j >= c; j--) {
            v[n - c - 1][j] = c + 1;
        }
        for (int i = n - c - 2; i > c; i--) {
            v[i][c] = c + 1;
        }
    }

    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << v[i][j] << " ";
}
