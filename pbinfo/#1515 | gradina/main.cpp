#include <fstream>

using namespace std;
ifstream cin("gradina.in");
ofstream cout("gradina.out");
short int a[1001][1001];
int s[1001][1001];

int main() {
    int n, p, k;
    int lin, col;
    int summax = 0, ap = 0;
    cin >> n >> p >> k;
    for (int i = 1; i <= p; i++) {
        cin >> lin >> col;
        a[lin][col] = 1;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            s[i][j] = a[i][j] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];

    for (int i = 1; i <= n - k + 1; i++) {
        for (int j = 1; j <= n - k + 1; j++) {
            int suma = s[i + k - 1][j + k - 1] - s[i - 1][j + k - 1] - s[i + k - 1][j - 1] + s[i - 1][j - 1];
            if (suma > summax) {
                summax = suma;
                ap = 1;
            } else if (suma == summax) {
                ap++;
            }
        }
    }
    cout << summax << '\n' << ap;
}
