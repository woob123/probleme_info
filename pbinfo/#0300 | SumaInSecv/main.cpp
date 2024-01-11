#include <fstream>
using namespace std;
ifstream fin("sumainsecv.in");
ofstream fout("sumainsecv.out");
int main(){
    int n, k;
    int v[101];
    fin >> n >> k;
    for(int i = 1; i <= n; i++)
        fin >> v[i];

    int l = 1, s = 0;   
    for(int r = 1; r <= n; r++){
        s += v[r];
        while(s > k)
            s -= v[l++];
            if(s == k){
                fout << l << " " << r;
                break;
            }
    }
}
