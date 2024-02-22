#include <fstream>

#define ll long long

using namespace std;

ifstream cin("spirala2.in");
ofstream cout("spirala2.out");

ll n, m, a[501][501];
int t;
int cerinta;
ll sum;

void generare() {
    ll val = 1;
    int lr = n, lc = m;
    int l = 1, k = 1;

    while (k <= lr && l <= lc) {

        for (int i = l; i <= lc; i++)
            a[k][i] = val, val++;
        k++;

        for (int i = k; i <= lr; i++)
            a[i][lc] = val, val++;
        lc--;

        for (int i = lc; i >= l; i--)
            a[lr][i] = val, val++;
        lr--;

        for (int i = lr; i >= k; i--)
            a[i][l] = val, val++;
        l++;
    }

}

void afisare() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}

void c1() {
    int templinie = 1, tempcoloana = 1;
    while (templinie <= n && tempcoloana <= m) {
        if (templinie != t && tempcoloana != t)
            sum += a[templinie][t] % 100003 + a[t][tempcoloana] % 100003;
        templinie++, tempcoloana++;
    }
    cout << sum;
}

void c2() {
    int templinie = 1, tempcoloana = 1;
    while (templinie <= n && tempcoloana <= n) {
        swap(a[templinie][t], a[t][tempcoloana]);
        templinie++;
        tempcoloana++;
    }
    afisare();
}

int main() {
    cin >> cerinta >> n >> t;
    m = n;
    generare();
    if (cerinta == 1)
        c1();
    else c2();

}
