#include <fstream>
using namespace std;
ifstream fin("proiecte.in");
ofstream fout("proiecte.out");
int n;
struct proiecte{
    int val;
    int poz;
}v[1001];
void sort(proiecte a[], int n){
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
            if(a[i].val > a[j].val)
                swap(a[i], a[j]);
}
int main(){
    fin >> n;
    for(int i = 1; i <= n; i++)
        fin >> v[i].val, v[i].poz = i;

   sort(v, n); 
   for(int i = 1; i <= n; i++)
        fout << v[i].poz << ' ';
}
