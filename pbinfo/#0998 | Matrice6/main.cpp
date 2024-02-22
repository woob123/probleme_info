#include <iostream>
#include <fstream>

using namespace std;

int main() {
    long int a[100][100], n, i, j, min = 1000000000, max = 0;
    ifstream in("matrice6.in");
    ofstream out("matrice6.out");
    in >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            in >> a[i][j];
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    for (i = 0; i < n; i++) {
        bool ok = false;
        for (j = 0; j < n; j++)
            if (a[i][j] == max) {
                ok = true;
                break;
            }
        if (ok == true)
            for (j = 0; j < n; j++)
                a[i][j] += min;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            out << a[i][j] << " ";
        out << endl;
    }
}
