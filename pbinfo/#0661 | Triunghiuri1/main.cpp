#include <iostream>
#include <algorithm>

using namespace std;
int cnt = 0;

int main() {
    int n;
    cin >> n;
    int v[n], i, j, *fnd;

    for (i = 0; i < n; ++i)
        cin >> v[i];

    sort(v, v + n);

    for (i = 0; i < n - 2; ++i)
        for (j = i + 1; j < n - 1; ++j) {
            fnd = upper_bound(v, v + n, v[i] + v[j] - 1);
            cnt += fnd - (v + j) - 1;
        }

    cout << cnt;

    return 0;
}
