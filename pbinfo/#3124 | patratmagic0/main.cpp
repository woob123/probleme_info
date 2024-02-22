#include <iostream>

using namespace std;

int verificare[250000];

int main() {
    int n, n2;
    cin >> n;
    n2 = n * n;

    int a[n][n], i, j, suma_prim, suma_latura;
    bool TRU = true;
    
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            cin >> a[i][j];

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            verificare[a[i][j]] += 1;
    for (i = 1; i <= n2; ++i)
        if (verificare[i] != 1) {
            TRU = false;
            break;
        }

    suma_prim = 0;
    for (i = 0; i < n; ++i)
        suma_prim += a[0][i];


    for (i = 1; i < n; ++i) {
        suma_latura = 0;
        for (j = 0; j < n; ++j)
            suma_latura += a[i][j];

        if (suma_latura != suma_prim) {
            TRU = false;
            break;
        }
    }
    
    for (i = 0; i < n; ++i) {
        suma_latura = 0;
        for (j = 0; j < n; ++j)
            suma_latura += a[j][i];

        if (suma_latura != suma_prim) {
            TRU = false;
            break;
        }
    }

    suma_latura = 0;
    for (i = 0; i < n; ++i)
        suma_latura += a[i][i];

    if (suma_latura != suma_prim)
        TRU = false;

    suma_latura = 0;
    for (i = 0; i < n; ++i)
        suma_latura += a[i][n - i - 1];

    if (suma_latura != suma_prim)
        TRU = false;
    
    if (TRU) cout << "true";
    else cout << "false";
    return 0;
}
