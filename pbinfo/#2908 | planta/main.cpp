#include <fstream>
using namespace std;
ifstream fin("planta.in");
ofstream fout("planta.out");
int main(){
    int d, a, b, n;
    fin >> d >> a >> b >> n;
    long long rez = 0;
    if(n%2==0)
        rez = d + (a*(n/2)) - (b*(n/2));
    else
        rez = d + (a*(n/2+1)) - (b*(n/2));

    fout << rez;
}
