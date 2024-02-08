#include <fstream>

using namespace std;
ifstream fin("tabla.in");
ofstream fout("tabla.out");
int a[22][22], n;

void read() {
    int i, j;
    fin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) fin >> a[i][j];
}

int PLinie(int l, int c) {
    int i, ct = 1;
    i = c - 1;
    while (i >= 1 && a[l][i] == a[l][c]) {
        ct++;
        i--;
    }
    i = c + 1;
    while (i <= n && a[l][i] == a[l][c]) {
        ct++;
        i++;
    }
    return ct;
}

int PCol(int c, int l) {
    int i, ct = 1;
    i = l - 1;
    while (i >= 1 && a[i][c] == a[l][c]) {
        ct++;
        i--;
    }
    i = l + 1;
    while (i <= n && a[i][c] == a[l][c]) {
        ct++;
        i++;
    }
    return ct;
}

void solve() {
    int i, j, pmax = 0, p1, p2, p3, p4, p;
    for (i = 1; i <= n - 1; i++)
        for (j = 1; j <= n; j++)
            if (a[i][j] != a[i + 1][j]) {
                swap(a[i][j], a[i + 1][j]);
                p1 = PLinie(i, j);
                p2 = PLinie(i + 1, j);
                p3 = PCol(j, i);
                p4 = PCol(j, i + 1);
                p = 0;
                if (p1 >= 3)
                    if (p3 >= 3){
                        p = p + 5 + (p1 - 3) + (p3 - 3);
                    }
                    else {
                        p = p + 1 + (p1 - 3);
                    }
                if (p2 >= 3)
                    if (p4 >= 3) {
                        p = p + 5 + (p2 - 3) + (p4 - 3);
                    }
                    else {
                        p = p + 1 + (p2 - 3);
                    }
                if (p1 < 3)
                    if (p3 >= 3) {
                        p = p + 1 + (p3 - 3);
                    }
                if (p2 < 3)
                    if (p4 >= 3) {
                        p = p + 1 + (p4 - 3);
                    }
                pmax = max(p, pmax);
                swap(a[i][j], a[i + 1][j]);
            }
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n - 1; j++)
            if (a[i][j] != a[i][j + 1]) {
                swap(a[i][j], a[i][j + 1]);
                p1 = PLinie(i, j);
                p2 = PLinie(i, j + 1);
                p3 = PCol(j, i);
                p4 = PCol(j + 1, i);
                p = 0;
                if (p1 >= 3)
                    if (p3 >= 3) {
                        p = p + 5 + (p1 - 3) + (p3 - 3);
                    }
                    else {
                        p = p + 1 + (p1 - 3);
                    }
                if (p2 >= 3)
                    if (p4 >= 3) {
                        p = p + 5 + (p2 - 3) + (p4 - 3);
                    }
                    else {
                        p = p + 1 + (p2 - 3);
                    }
                if (p1 < 3)
                    if (p3 >= 3) {
                        p = p + 1 + (p3 - 3);
                    }
                if (p2 < 3)
                    if (p4 >= 3) {
                        p = p + 1 + (p4 - 3);
                    }
                pmax = max(p, pmax);
                swap(a[i][j], a[i][j + 1]);
            }
    fout << pmax;
}

int main() {
    read();
    solve();
    return 0;
}
