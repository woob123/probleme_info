#include <fstream>
using namespace std;
ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");
struct nr{
    int nr, nrdiv;
}v[1001];
int div(int n){
    int cnt = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            cnt += 2;
            if(i*i == n)
                cnt--;
        }
    }
    return cnt;
}
void sort(nr a[], int n){
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++){
            if(v[i].nrdiv < v[j].nrdiv)
                swap(v[i], v[j]);
            if(v[i].nrdiv == v[j].nrdiv)
                if(v[i].nr > v[j].nr)
                    swap(v[i], v[j]);
        }
}
int main(){
    int n;
    fin >> n;
    for(int i = 1; i <= n; i++){
        fin >> v[i].nr;
        v[i].nrdiv = div(v[i].nr);
    }

    sort(v, n);
    for(int i = 1; i <= n; i++)
        fout << v[i].nr << " ";
}
