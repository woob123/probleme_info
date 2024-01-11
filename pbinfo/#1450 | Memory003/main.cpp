#include <fstream>
#define ull unsigned long long
using namespace std;
ifstream fin("memory003.in");
ofstream fout("memory003.out");

ull n, m, v[1001], p;
ull var;
int cnt;
int main(){
    fin >> n >> m >> p;
    for(int i = 1; i <= m; i++)
        v[i] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++){
            fin >> var;
            v[j] = v[j] * var % p;
        }

    for(int i = 1; i <= m; i++)
        cnt += !v[i];
    fout << cnt;
}
