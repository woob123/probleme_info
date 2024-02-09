#include <iostream>

using namespace std;

int a[100001], s[100001], maxx[100001];

int cb(int a[], int n, int val) {
    int st = 1, dr = n;
    while (st <= dr) {
        int med = (st + dr) / 2;
        if (val < a[med]) dr = med - 1;
        else st = med + 1;
    }
    return dr;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i], s[i] = s[i - 1] + a[i];
    for (int i = 1; i <= n; i++) {
        if (a[i] > maxx[i - 1]) maxx[i] = a[i];
        else maxx[i] = maxx[i - 1];
    }
    int Q, x, p;
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> x >> p;
        int v1 = cb(maxx, n, x);
        int v2 = cb(s, n, p);
        cout << min(v1, v2) << "\n";
    }
    
    return 0;
}
