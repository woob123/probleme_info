#include <fstream>

using namespace std;
ifstream fin("piesesah.in");
ofstream fout("piesesah.out");
int n, m, t, a[1001][1001];
struct piese {
    char piesa;
    int lin, col;
};
const int dpi[] = {-1, -1, 1, 1}, dpj[] = {-1, 1, 1, -1};
const int di[] = {-1, -1, -1, 0, 0, 1, 1, 1}, dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int dti[] = {-1, 0, 1, 0}, dtj[] = {0, 1, 0, -1};
const int dci[] = {1, 2, 2, 1, -1, -2, -2, -1}, dcj[] = {2, 1, -1, -2, -2, -1, 1, 2};

int main() {
    char piesa;
    int lin, col;
    fin >> n >> m >> t;
    piese p[m + 1];
    for (int i = 1; i <= m; i++) {
        fin >> piesa >> lin >> col;
        a[lin][col] = 2;
        p[i].piesa = piesa;
        p[i].lin = lin;
        p[i].col = col;
    }
    for (int i = 1; i <= m; i++) {
        switch (p[i].piesa) {
            case 'p': {
                for (int k = 0; k < 4; k++)
                    if (p[i].lin + dpi[k] > 0 && p[i].lin + dpi[k] <= n && p[i].col + dpj[k] > 0 &&
                        p[i].col + dpj[k] <= n && a[p[i].lin + dpi[k]][p[i].col + dpj[k]] == 0)
                        a[p[i].lin + dpi[k]][p[i].col + dpj[k]] = 1;
                break;
            }
            case 'r': {
                for (int k = 0; k < 8; k++)
                    if (p[i].lin + di[k] > 0 && p[i].lin + di[k] <= n && p[i].col + dj[k] > 0 &&
                        p[i].col + dj[k] <= n && a[p[i].lin + di[k]][p[i].col + dj[k]] == 0)
                        a[p[i].lin + di[k]][p[i].col + dj[k]] = 1;
                break;
            }
            case 'q': {
                for (int k = 0; k < 8; k++) {
                    int x = 1;
                    while (p[i].lin + di[k] * x > 0 && p[i].lin + di[k] * x <= n && p[i].col + dj[k] * x > 0 &&
                           p[i].col + dj[k] * x <= n && a[p[i].lin + di[k] * x][p[i].col + dj[k] * x] != 2)
                        a[p[i].lin + di[k] * x][p[i].col + dj[k] * x] = 1, x++;
                }
                break;
            }
            case 'n': {
                for (int k = 0; k < 4; k++) {
                    int x = 1;
                    while (p[i].lin + dpi[k] * x > 0 && p[i].lin + dpi[k] * x <= n && p[i].col + dpj[k] * x > 0 &&
                           p[i].col + dpj[k] * x <= n && a[p[i].lin + dpi[k] * x][p[i].col + dpj[k] * x] != 2)
                        a[p[i].lin + dpi[k] * x][p[i].col + dpj[k] * x] = 1, x++;
                }
                break;
            }
            case 't': {
                for (int k = 0; k < 4; k++) {
                    int x = 1;
                    while (p[i].lin + dti[k] * x > 0 && p[i].lin + dti[k] * x <= n && p[i].col + dtj[k] * x > 0 &&
                           p[i].col + dtj[k] * x <= n && a[p[i].lin + dti[k] * x][p[i].col + dtj[k] * x] != 2)
                        a[p[i].lin + dti[k] * x][p[i].col + dtj[k] * x] = 1, x++;
                }
                break;
            }
            case 'c': {
                for (int k = 0; k < 8; k++)
                    if (p[i].lin + dci[k] > 0 && p[i].lin + dci[k] <= n && p[i].col + dcj[k] > 0 &&
                        p[i].col + dcj[k] <= n && a[p[i].lin + dci[k]][p[i].col + dcj[k]] == 0)
                        a[p[i].lin + dci[k]][p[i].col + dcj[k]] = 1;
                break;
            }
        }
    }
    for (int i = 1; i <= t; i++) {
        fin >> lin >> col;
        fout << a[lin][col] << '\n';
    }
    return 0;
}
