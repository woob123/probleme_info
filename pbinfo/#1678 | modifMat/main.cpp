#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream fin("matrice.in");
ofstream fout("matrice.out");
int n, a[50][50];
void read() {
    fin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
}
int gennr(int v[], int kcif) {
    int nr = 0;
    for (int i = kcif - 1; i >= 0; i--)
        nr = nr * 10 + v[i];
    return nr;
}
bool prim(int x) {
    if (x <= 1)
        return false;
    for (int d = 2; d <= sqrt(x); d++)
        if (x % d == 0)
            return false;
    return true;
}
void change(int(&v)[4], int kcif) {
    int pcif = v[0];
    for (int i = 0; i < kcif - 1; i++)
        v[i] = v[i + 1];
    v[kcif - 1] = pcif;
}
bool superprim(int x) {
    if (prim(x))
        return true;
    int cx = x;
    do {
        int cif[4], kcif = 0, cx = x;
        while (cx)
            cif[kcif++] = cx % 10, cx /= 10;
        for (int kperm = 1; kperm < kcif; kperm++) {
            change(cif, kcif);
            cx = gennr(cif, kcif);
            if (prim(cx))
                return true;
        }
    } while (x != cx);
    return false;
}
void solve() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i < j && j < n - i - 1)
                swap(a[i][j], a[n - i - 1][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i > j && j < n - i - 1)
                if (superprim(a[i][j]) && superprim(a[i][n - j - 1]))
                    swap(a[i][j], a[i][n - j - 1]);
}
void write() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            fout << a[i][j] << " ";
        fout << endl;
    }
}
int main() {
    read();
    solve();
    write();
}
