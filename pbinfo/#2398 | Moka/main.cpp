#include <fstream>
#define MOD 1999999973
using namespace std;
ifstream fin("moka.in");
ofstream fout("moka.out");
int main(){
    long long a, b;
    fin >> a >> b;
    a = a % MOD;
    int p = 1;
    while(b){
        if(b%2==1)
            p = (p*a)%MOD;
        b /= 2;
        a = (a*a)%MOD;
    }
    fout << p;
    fin.close();
    fout.close();
}
