#include <fstream>
using namespace std;
ifstream fin("sortcif.in");
ofstream fout("sortcif.out");
struct nr{
    int nr, sumcif;
}v[101];
int sum(int n){
    int suma = 0;
    while(n){
        suma += n%10;
        n/=10;
    }
    return suma;
}
void sort(nr a[], int n){
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
            if(v[i].sumcif > v[j].sumcif)
                swap(v[i], v[j]);
}
int main(){
    int n;
    fin >> n;
    for(int i = 1; i <= n; i++){
        fin >> v[i].nr;
        v[i].sumcif = sum(v[i].nr);
    }

    sort(v, n);
    for(int i = 1; i <= n; i++)
        fout << v[i].nr << " ";
}
