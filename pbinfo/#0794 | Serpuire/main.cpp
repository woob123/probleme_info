#include <iostream>

using namespace std;
int mat[26][26];

int main() {
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; ++i)
        for (j = 1; j <= n; ++j)
            cin >> mat[i][j];
    i = j = 1;
    while (!(i == n && j == n)) {
        if (i == n)
            cout << mat[i][j++] << ' ';
        else
            cout << mat[i++][j] << ' ';

        while (i != 1 && j != n)
            cout << mat[i--][j++] << ' ';

        if (j == n)
            cout << mat[i++][j] << ' ';
        else
            cout << mat[i][j++] << ' ';

        while (i != n && j != 1)
            cout << mat[i++][j--] << ' ';
    }
    cout << mat[n][n];
}
