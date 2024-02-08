#include <iostream>

using namespace std;
int cnt = 0;

int main() {
    int n;
    cin >> n;
    int v[n], i, j, k;

    for (i = 0; i < n; ++i)
        cin >> v[i];

    for (i = 0; i < n - 2; ++i)
        for (j = i + 1; j < n - 1; ++j)
            for (k = j + 1; k < n; ++k)
                if ((v[i] + v[j] > v[k]) && (v[i] + v[k] > v[j]) && (v[j] + v[k] > v[i]))
                    cnt++;

    cout << cnt;

    return 0;
}
