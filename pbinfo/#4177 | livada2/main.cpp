#include <bits/stdc++.h>
using namespace std;
ifstream fin ("livada2.in");
ofstream fout ("livada2.out");
const int nMAX = 100e3;
int n, q;
int v[nMAX + 1];
bool magic[nMAX + 1];
int smen[nMAX + 2];
int st[nMAX + 1];
int dr[nMAX + 1];
void genSt(){
    int last = 0;
    for (int i = 1; i <= n; ++i){
        if (magic[i])
            last = i;
        st[i] = last;
    }
}
void genDr(){
    int last = n+1;
    for (int i = n; i >= 1; --i){
        if (magic[i])
            last = i;
        dr[i] = last;
    }
}
int main(){
    fin >> n;
    for (int i = 1; i <= n; ++i)
        fin >> v[i];
    for (int i = 1; i <= n; ++i)
        fin >> magic[i];

    genSt();
    genDr();

    fin >> q;
    while (q--){
        int op, x, y, p;
        fin >> op >> x >> y >> p;

        if (op == 1){
            if (dr[y] != n+1)
                y = dr[y];
            smen[x] += p;
            smen[y+1] -= p;
        }
        else
        {
            if (st[x] != 0)
                x = st[x];
            smen[x] += -p;
            smen[y+1] -= -p;
        }
    }

    for (int i = 1; i <= n; ++i){
        fout << v[i] + smen[i] << ' ';
        smen[i+1] += smen[i];
    }
}
