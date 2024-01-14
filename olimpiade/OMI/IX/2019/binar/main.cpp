// problema: #2896 | binar1 (pbinfo)
// limita de timp: 1.5s
// limita de memorie: 8MB/2MB
// i/o: binar.in/binar.out
#include <fstream>
using namespace std;
ifstream fin("binar.in");
ofstream fout("binar.out");
//aflam cate valori de 1 exista in reprezentarea binara
int nr1(long long n){
    int cnt = 0;
    while(n){
        cnt++;
        n -= (n&-n);
    }
    return cnt;
}
int main(){
    int c;
    fin >> c;
  //rezolvare cerinta 1
    if(c == 1){
        int n;
        int maxi = 0, nr=0;
        fin >> n;
        //parcurgem sirul si gasim numarul 
        for(int i = 1; i <= n; i++){
            int x;
            fin >> x;
            if(nr1(x) > maxi)
                maxi = nr1(x), nr = x;
            else if(nr1(x) == maxi)
                if(x > nr)
                    nr = x;
        }
        //afisam numarul gasit
        fout << nr;
        return 0;
    }
    else{
        int n;
        fin >> n;
        //daca lungimea sirului este 1
        if(n == 1){
            int x;
            fin >> x;
                //daca x este 0, nu exista niciun numar cu 1 in reprezentarea binara
                if(x == 0){
                    fout << 0 << " " << 0;
                    return 0;
                }
            //daca x nu este 0, atunci este 1 si este singurul numar cu 1 in reprezentarea binara
            fout << 1 << " " << 1;
            return 0;
        }
        int x;
        fin >> x;
        //retinem numarul din urma lui x, astfel nu folosim vectori
        int prev = x;
        int l = 1, lmax = 1, poz = 1, pozmax = 1;
        //parcurgem sirul si aflam secventa maxima
        for(int i = 2; i <= n; i++){
            fin >> x;
            //daca au acelasi numar de 1 in reprezentare, lungimea creste
            if(nr1(x) == nr1(prev))
                l++;
            //daca nu, resetam lungimea
            else
                l = 1, poz = i;
            //gasim lungimea maxima
            if(l > lmax)
                lmax = l, pozmax = poz;
            prev = x;
        }
        fout << lmax << " " << pozmax;
        return 0;
    }
}
