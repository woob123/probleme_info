#include <fstream>
#include <cmath>

using namespace std;

ifstream cin("vuli.in");
ofstream cout("vuli.out");
long long a[101], v[101];
int n, k;

int var(long long num) {
    int sum = 0;
    while (num != 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }
    int rad = sqrt(sum);
    for (int t = 2; t <= rad; t++)
        if (sum % t == 0)
            return 0;
    return 1;
}

int main() {
    cin >> n;
    n++;
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            v[j] = a[j] + a[j - 1];
        for (int j = 1; j <= i; j++)
            a[j] = v[j];
    }
    if (n % 2 == 0)
        k = n / 2;
    else
        k = (n + 1) / 2;
    for (int i = 1; i <= k; i++) {
        if (var(a[i]) == 1)
            cout << a[i] << " ";
    }
}
