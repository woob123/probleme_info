#include <iostream>

using namespace std;

int main() {
    int a[200][200], v[1000] = {0}, n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i > j && j > n - 1 - i)
                v[a[i][j]] += 1;
    for (i = 0; i < 1000; i++)
        if (v[i] >= 2)
            cout << i << " ";
}
