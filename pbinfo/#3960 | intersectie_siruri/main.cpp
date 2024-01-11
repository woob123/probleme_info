#include <fstream>
#include <algorithm>
using namespace std;
int main(){
    ifstream fin ("intersectie.in");
    ofstream fout ("intersectie.out");

    int a[100000], b[100000], i, n, m;
    bool exista;

    fin >> a[0];
    n = 1;
    while (fin >> a[n] && a[n] != 0)
        n++;

    while (fin >> b[0]){
        m = 1;
        while (fin >> b[m] && b[m] != 0)
            m++;

        for (i = 0; i < n; ++i){
            if (a[i] != -1)
                if (!binary_search(b, b+m, a[i]))
                    a[i] = -1;
        }
    }

    exista = false;
    for (i = 0; i < n; ++i)
        if (a[i] != -1){
            fout << a[i] << ' ';
            exista = true;
        }
    if (!exista)
        fout << "nu exista";

    fin.close();
    fout.close();
    return 0;
}
