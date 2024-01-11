#include <fstream>
using namespace std;
ifstream fin("memory001.in");
ofstream fout("memory001.out");

long long n, m, smin = 2000000000, ind;
long long var;
long long v[1001];
int main(){
    fin >> m >> n;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            fin >> var;
            v[j] = v[j] + var;
        }
    }
    for(int i = 1; i <= n; i++)
        if(v[i] < smin)
            smin = v[i], ind = i;
    fout << ind;
}
