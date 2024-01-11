#include <fstream>
using namespace std;
ifstream fin("poarta.in");
ofstream fout("poarta.out");
int harta[251][251];
int main(){
    int n;
    fin >> n;
    int rasp = n;
    for(int i = 1; i <= n; i++){
        int i1,j1,i2,j2;
        fin >> i1 >> j1 >> i2 >> j2;
        harta[i1][j1] = 1;
        if(harta[i2][j2] == 1 && i1 != i2){
            rasp++;
        }
        harta[i2][j2] = 1;
    }
    fout << rasp;
}
