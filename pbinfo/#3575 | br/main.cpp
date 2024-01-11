#include <fstream>
using namespace std;
ifstream fin("br.in");
ofstream fout("br.out");
int n, t;
int v[15005], s[30010];
int k, x;
int binary_search(int k, int x){
    int st = k, dr = k+n-1;
    int mij = 0;
    int sol = k-1;
    while(st <= dr){
        mij = (st+dr)/2;
        if(s[mij] - s[k-1] <= x){
            st = mij+1;
            sol = mij;
        }
        else{
            dr = mij-1;
        }
    }
    sol-=(k-1);
    return sol;
}
int main(){
    ios::sync_with_stdio(false);
    fin.tie(nullptr), fout.tie(nullptr);
    fin >> n >> t;
    for(int i = 1; i <= n; i++){
        fin >> v[i];
        s[i] = s[i-1] + v[i];
    }

    for(int i = n+1; i <= 2*n; i++){
        s[i] = s[i-1] + v[i-n];
    }
    for(int i = 1; i <= t; i++){
        fin >> k >> x;
        fout << binary_search(k, x) << '\n';
    }
}
