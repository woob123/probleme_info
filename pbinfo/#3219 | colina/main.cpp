#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("colina.in");
ofstream fout("colina.out");
struct parcele{
    int alt, poz;
}v[100005];
int n, m;
int cresc(parcele a, parcele b){
    if(a.alt == b.alt)
        return a.poz < b.poz;
    return a.alt < b.alt;
}
void binary_search(int x){
    int st = 1, dr = n;
    while(st <= dr){
        int mij = (st + dr) / 2;
        if(v[mij].alt > x)
            dr = mij-1;
        else if(v[mij].alt < x)
            st = mij+1;
        else{
            int i = mij;
            while(v[i].alt == x)
                i--;
            i++;
            fout << "DA ";
            while(v[i].alt == x)
                fout << v[i].poz << ' ', i++;
            fout << "\n";
            return;
        }
    }
    fout << "NU" << "\n";
}
int main(){
    fin >> n >> m;
    for(int i = 1; i <= n; i++){
        fin >> v[i].alt;
        v[i].poz = i;
    }
    sort(v+1, v+n+1, cresc);
    for(int i = 1; i <= m; i++){
        int x;
        fin >> x;
        binary_search(x);
    }
}
