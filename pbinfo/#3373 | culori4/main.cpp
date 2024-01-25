#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("culori.in");
ofstream fout("culori.out");
int v[10000], h[10000];
int main(void){
    int q, n, m, c, a, b, x, i, maxlen = 0, crt = 0;
    fin >> q >> c >> n >> m;
    for(i = 0; i < n; i++)
        fin >> v[i];
    for(i = 0; i < m; i++){
        fin >> a >> b >> x;
        h[a - 1] += x;
        h[b] -= x;
    }
    if(q == 1){
        for(i = 1; i < n; i++) {
            if(v[i] == v[i - 1])
                crt++;
            else {
                if(crt > maxlen)
                    maxlen = crt;
                crt = 0;
            }
        }
        fout << maxlen + 1;
    } 
    else{
        for(i = 1; i < n; i++)
            h[i] += h[i - 1];
        for(i = 0; i < n; i++)
            fout << v[i] + h[i] << " ";
    }
    return 0;
}
