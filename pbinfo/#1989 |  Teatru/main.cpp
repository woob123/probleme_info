#include <fstream>
using namespace std;
ifstream fin("teatru.in");
ofstream fout("teatru.out");
int z, c;
char v[55500];
int frec[205];
int l, lmax;
int u, p;
int main(){
    fin >> z >> c;
    fin.get();
    fin >> v;
    int j = 0;
    for(int i = 0; i < z; i++){
        frec[v[i]]++;
        if(frec[v[i]]==1){
            l++;
        }
        while(l > c){
            if(frec[v[j]]==1)
                l--;
            frec[v[j]]--;
            j++;
        }
        if(i-j+1 > lmax){
            lmax = i-j+1;
            p = j;
            u = i;
        }
    }
    fout << lmax << '\n';
    for(int i = p; i <= u; i++){
        fout << v[i];
    }
}
