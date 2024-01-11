#include <fstream>
using namespace std;
ifstream fin("hobby.in");
ofstream fout("hobby.out");
struct copil{
    int copil, preten;
}v[701];
int n;
string a[701];
int main(){
    fin >> n;
    for(int i = 1; i <= n; i++){
        fin >> v[i].copil >> v[i].preten;
    }
    for(int i = 1; i <= n; i++){
        fin >> a[i];
    }
}
