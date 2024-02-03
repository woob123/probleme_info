#include <fstream>
using namespace std;
unsigned long long a[1001][1001];
int poz[1001];
ifstream cin("triunghi3.in");
ofstream cout("triunghi3.out");
int main() {
    long long n, nr;

    cin >> n;
  
    for (int i = n; i >= 1; i--) {
        cin >> poz[i] >> nr;
        a[i][poz[i]] = nr;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = poz[i] + 1; j <= i; j++)
            a[i][j] = a[i - 1][j - 1] - a[i][j - 1];

        for (int j = poz[i] - 1; j >= 1; j--)
            a[i][j] = a[i - 1][j] - a[i][j + 1];
    }

    for (int i = 1; i <= n; i++, cout << ' ') {
        cout << a[n][i];
    }
}
