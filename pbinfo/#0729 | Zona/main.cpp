#include <iostream>

using namespace std;

int main() {
    int a[200][200], v[10000], i, j, n, k = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i > j && j < n - 1 - i)
                v[k++] = a[i][j];
    for (i = 0; i < k - 1; i++)
        for (j = i + 1; j < k; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);
            else if (v[i] == v[j])
                v[i] = -1;
    for (i = 0; i < k; i++)
        if (v[i] != -1)
            cout << v[i] << " ";
}
