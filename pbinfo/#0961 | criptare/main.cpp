#include <fstream>
using namespace std;
ifstream fin("criptare.in");
ofstream fout("criptare.out");
int h[1005], v[1005], n, solx, soly;
int main() {
    fin >> n;
    for (int i = 1; i <= n; ++i)
        for (int x, j = 1; j <= n; ++j) {
            fin >> x;
            h[i] |= x;
            v[j] |= x;
        }
    for (int i = 1; i <= n; ++i) {
        solx += h[i];
        soly += v[i];
    }
    fout << n - min(solx, soly) << "\n";
    int i = 1, j = 1;
    while (i <= n && j <= n) {
        while (h[i] && i <= n)
            i++;
        while (v[j] && j <= n)
            j++;
        if (i <= n && j <= n) {
            fout << i << " " << j << "\n";
            i++, j++;
        }
    }
    while (i <= n) {
        while (h[i] && i <= n)
            i++;
        if (i <= n) {
            fout << i << " 1\n";
            i++;
        }
    }
    while (j <= n) {
        while (v[j] && j <= n)
            j++;
        if (j <= n) {
            fout << "1 " << j << "\n";
            j++;
        }
    }

}
