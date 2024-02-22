#include <iostream>

using namespace std;

int main() {
    long int a[102][102] = {0}, n, i, j, k = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1])
                k += 1;
    cout << k;
}
