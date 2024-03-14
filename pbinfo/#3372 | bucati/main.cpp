#include <fstream>
#define certina cerinta

using namespace std;

ifstream fin("bucati.in");
ofstream fout("bucati.out");

int n, cn, p10 = 1, nrc = 0, c_nrc;
int vmax, c1, c2, v, vmin = 9973, x, d;
short int certina;

int main() {
    fin >> cerinta >> n;
    cn = n;
    while (cn) {
        nrc++;
        p10 *= 10;
        cn /= 10;
    }
    c_nrc = nrc;
    p10 /= 10;
    if (cerinta == 1) {
        vmax = n / 100;
        c1 = n / 10 % 10;
        c2 = n % 10;
        while (nrc) {
            if (n / 100 > vmax) {
                vmax = n / 100;
                c1 = n / 10 % 10;
                c2 = n % 10;
            }
            n = n % 10 * p10 + n / 10;
            nrc--;
        }
        fout << vmax + c1 + c2 << '\n';
    } else {
        while (nrc) {
            v = n % 100;
            x = n / 100;
            while (x) {
                v += x % 10;
                x /= 10;
            }
            if (v < vmin) {
                d = 2;
                while (d * d <= v && v % d != 0) {
                    d++;
                }
                if (d * d > v) {
                    vmin = v;
                }
            }
            n = n % 10 * p10 + n / 10;
            nrc--;
        }
        if (vmin == 9973) {
            nrc = c_nrc;
            while (nrc) {
                v = n % 1000;

                x = n / 1000;
                while (x) {
                    v += x % 10;
                    x /= 10;
                }
                if (v < vmin) {
                    d = 2;
                    while (d * d <= v && v % d != 0) {
                        d++;
                    }
                    if (d * d > v) {
                        vmin = v;
                    }
                }
                n = n % 10 * p10 + n / 10;
                nrc--;
            }
            fout << vmin << '\n';
        } else {
            fout << vmin << '\n';
        }
    }

    return 0;
}
