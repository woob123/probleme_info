#include <fstream>
using namespace std;
ifstream fin("masini.in");
ofstream fout("masini.out");

void sortare(int a[], int n){
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);
}

int main(){
    int n, t;
    int v[1001];
    fin >> n >> t;
    for(int i = 1; i <= n; i++)
        fin >> v[i];

    sortare(v, n);
    int i = 1;
    while(t - v[i] >= 0){
        t-=v[i];
        i++;
    }
    fout << i-1;
}
