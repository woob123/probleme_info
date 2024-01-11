#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("reactivi.in");
ofstream fout("reactivi.out");
int n;
int k = 1;
struct reactiv{
    int n;
    int capat;
}v[16005];
bool comp(reactiv a, reactiv b){
    return (a.n < b.n ||(a.n==b.n && a.capat>b.capat));
}
int main(){
    fin >> n;
    for(int i = 1; i <= n; i++){
        int a, b;
        fin >> a >> b;
        // 0 - inceput, 1 - final
        v[k].n = a, v[k].capat = 0;
        k++;
        v[k].n = b, v[k].capat = 1;
        k++;
    }

    k--;

    sort(v+1, v+k+1, comp);

    int ok = 0;
    int cnt = 0;
    for(int i = 1; i <= k; i++){
        if(ok > 0)
            cnt++;
        if(v[i].capat == 0)
            ok++;
        else if(v[i].capat == 1)
            ok--;
    }
    fout << cnt;
}
