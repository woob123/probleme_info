#include <fstream>
using namespace std;
ifstream fin("numere23.in");
ofstream fout("numere23.out");
int numere[10001];
int b[10001];
int n;
void stergere(int val){
    for(int i = val; i < n; i++){
        numere[i] = numere[i+1];
    } 
}
bool prim3(int n){
    if(n < 2) return false;
    int nr = 0;
    int d = 2;
    while(n > 1 && nr <= 3){
        while(n%d == 0){
            nr++;
            n/=d;
        }
        d++;
    }
    if(n == 1 && nr <= 3) return true;
    return false;
}
int main(){
    int k, c;
    fin >> n >> k >> c;
    int val = 1;
    int p = 1;
    int cn = n;
    while(cn){
        if(prim3(val)){ 
            cn--;
            numere[p++] = val;
        }
        val++;
    }
    val--;
    if(c == 1){
        fout << val;
    }
    else{
        int i = 1;
        int j = 1;
        int cn = n;
        while(n){
            fout << i << " " << j << endl;
            b[j] = numere[i];
            for(int l = 1; l <= n; l++){
                fout << numere[l] << " ";
            }
            fout << '\n';
            stergere(i);
            n--;

            if(j + k > n){
                j = ((j+k)-cn)+1;
            }
            else{
                j += k;
            }
        }
        for(int l = 1; l <= cn; l++){
            fout << b[l] << " ";
        }
    }
}
