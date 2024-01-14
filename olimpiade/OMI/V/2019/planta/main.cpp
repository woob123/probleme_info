// problema: #2908 | planta (pbinfo)
// limita de timp: 0.1s
// limita de memorie: 32MB/1MB
// i/o: planta.in/planta.out
#include <fstream>
using namespace std;
ifstream fin("planta.in");
ofstream fout("planta.out");
int main(){
    //din enunt observam ca planta creste cu A cm in zilele impare
    //si scade cu B cm in zilele pare, astfel daca numarul de zile
    //este par, planta va creste cu A cm n/2 zile, si va scade cu
    //B cm n/2 zile. Daca numarul de zile este impar, planta va
    //creste cu A cm in (n/2)+1 zile si va scade cu B cm in n/2 zile
    int d, a, b, n;
    fin >> d >> a >> b >> n;
    long long rez = 0;
    if(n%2==0)
        rez = d + (a*(n/2)) - (b*(n/2));
    else
        rez = d + (a*(n/2+1)) - (b*(n/2));

    fout << rez;
}
