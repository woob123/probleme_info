#include <fstream>
using namespace std;
ifstream fin("divigrup.in");
ofstream fout("divigrup.out");
struct numere{
    int nrdiv;
    int numar;
}v[201];
int cnt[201];
int nr_div(int n){
    int cnt = 1;
    int d = 2, p;
    while(n > 1){
        p = 0;
        while(n%d==0){
            p++;
            n/=d;
        }
        if(p){
            cnt *= (p+ 1);
        }
        d++;
        if(n > 1 && d*d > n)
            d = n;
    }
    return cnt;
}
void sort(numere v[], int n){
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(v[i].nrdiv < v[j].nrdiv)
                swap(v[i], v[j]);
            if(v[i].nrdiv == v[j].nrdiv)
                if(v[i].numar > v[j].numar)
                    swap(v[i], v[j]);
        }
    }
}
int main(){
    int n;
    fin >> n;
    for(int i =  1; i <= n; i++){
        fin >> v[i].numar;
        v[i].nrdiv = nr_div(v[i].numar);
    }

    sort(v, n);

    int k = 1, l = 1;
    for(int i = 1; i < n; i++){
        if(v[i].nrdiv != v[i+1].nrdiv){
            cnt[k] = l;
            k++;
            l = 1;
        }
        if(v[i].nrdiv == v[i+1].nrdiv)
            l++;
        cnt[k] = l;
    }
    fout << k << endl;

    k = 1;
    fout << cnt[k] << " ";
    for(int i = 1; i <= n; i++){
        if(v[i].nrdiv == v[i+1].nrdiv)
            fout << v[i].numar << " ";
        else if(v[i].nrdiv != v[i+1].nrdiv){
            fout << v[i].numar << endl;
            k++;
            if(cnt[k] != 0)
                fout << cnt[k] << " ";
        }
    }
}
