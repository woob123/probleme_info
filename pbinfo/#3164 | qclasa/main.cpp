#include <fstream>
using namespace std;
ifstream fin("qclasa.in");
ofstream fout("qclasa.out");
struct elev{
    int cod;
    int medie;
    int absente;
}a[45];
void sortare(elev a[], int n){
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++){
            if(a[i].absente < a[j].absente)
                swap(a[i], a[j]);
            if(a[i].absente == a[j].absente)
                if(a[i].cod > a[j].cod)
                    swap(a[i], a[j]);
        }
}
int main(){
    int n;
    fin >> n;
    for(int i = 1; i <= n; i++){
        fin >> a[i].cod >> a[i].medie >> a[i].absente;
    }

    sortare(a, n);
    int cnt = 0, sum = 0;
    for(int i = 1; i <= n; i++){
        if(a[i].medie == 10)
            cnt++;

        sum += a[i].medie;
    }

    fout << cnt << endl;
    fout << sum/n << endl;
    fout << a[1].cod << " " << a[1].medie << " " << a[1].absente << endl;
    fout << a[2].cod << " " << a[2].medie << " " << a[2].absente << endl;
}
