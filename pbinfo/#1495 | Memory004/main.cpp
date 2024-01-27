#include <fstream>
using namespace std;
ifstream cin("memory004.in");
ofstream cout("memory004.out");
short linii, coloane, nr, j;
long long lmax = 0;
struct linii{
    short lung_inceput = 0;
    bool terminat = false;
    short lungime = 0;
    short lung_final = 0;
} p[1002];
bool is_prime(short n){
    bool ok;
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (short i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main(void){
    cin >> linii >> coloane;
    for (int i = 0; i < linii; i++){
        for (j = 0; j < coloane; j++){
            cin >> nr;
            if (is_prime(nr) == true){
                if (p[j % coloane].terminat == 0)
                    p[j % coloane].lung_inceput++;
                p[j % coloane].lungime++;                           
                p[j % coloane].lung_final = p[j % coloane].lungime;
            }
            else if (is_prime(nr) == false){
                p[j % coloane].terminat = 1;
                if (j == 0)
                    p[j % coloane].lung_inceput = 0;
                if (p[j % coloane].lungime > lmax)
                    lmax = p[j % coloane].lungime;
                p[j % coloane].lung_final = 0;
                p[j % coloane].lungime = 0;
            }
        }
    }
    for (int i = 0; i < coloane; i++){
        long long lung_temporara = 0;
        if (p[i].lung_final != 0 && p[i + 1].lung_inceput != 0){
            lung_temporara = p[i].lung_final + p[i + 1].lung_inceput;   
            if (p[i + 2].lung_inceput != 0 && p[i + 1].lungime == linii) {
                int k = i + 2;
                while (p[k].lung_inceput != 0 && p[k - 1].lungime == linii) {
                    lung_temporara += p[k].lung_inceput;
                    k++;
                }
            }
        }
        if (lung_temporara > lmax)
            lmax = lung_temporara;
    }
    cout << lmax << endl;
}
