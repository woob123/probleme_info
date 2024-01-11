#include <fstream>
using namespace std;
ifstream fin("kprim.in");
ofstream fout("kprim.out");
int v[10000];
bool prim(int n){
    if(n == 0 || n == 1 || (n%2==0 && n!=2))
        return false;
    for(int i = 3; i * i <= n; i++)
        if(n%i == 0)
            return false;
    return true;
}
int main(){
    int n;
    fin >> n;
    int k = 0;
    int v[n+1];
    for(int i = 1; k <= n; i++){
        if(prim(i)){
            k++;
            v[k] = i;
        }
    }
    fout << (long long)v[k] * v[k];
}
