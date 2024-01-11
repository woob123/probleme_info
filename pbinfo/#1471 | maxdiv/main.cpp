#include <fstream>
#include <vector>
using namespace std;
ifstream fin("maxdiv.in");
ofstream fout("maxdiv.out");
struct numere{
    int n, nrdiv;
}v[1005];
int nr_div(int n){
    int cnt = 1;
    int d = 2;
    int p;
    while(n > 1){
        p = 0;
        while(n%d==0){
            n/=d;
            ++p;
        }
        if(p){
            cnt = cnt * (p+1);
        }
        ++d;
        if(n > 1 && d*d > n){
            d = n;
        }
    }
    return cnt;
}
int t;
int n;
int maxdiv = 0;
vector<int> indici;
int main(){
    fin >> n >> t;
    for(int i = 1; i <= n; i++){
        fin >> v[i].n;
        v[i].nrdiv = nr_div(v[i].n);
        if(nr_div(v[i].n) > maxdiv){
            maxdiv = nr_div(v[i].n);
        }
    }
    int max_ap = 0;
    for(int i = 1; i <= n; i++){
        if(v[i].nrdiv == maxdiv){
            max_ap++;
            indici.push_back(i);
        }
    }
    if(t == 1){
        fout << max_ap-1;
        return 0;
    }
    else{
        int lmax = 0;
        int l = 0;
        int st = 0, dr = 0;
        for(int i = 1; i < indici.size(); ++i){
            l = indici.at(i) - indici.at(i-1);
            if(l > lmax){
                lmax = l;
                st = indici.at(i-1);
                dr = indici.at(i);
            }
        }
        for(int i = st; i <= dr; i++){
            fout << v[i].n << " ";
        }
        return 0;
    }
}
