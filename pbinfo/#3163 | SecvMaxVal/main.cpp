#include <fstream>
using namespace std;
ifstream fin("secvmaxval.in");
ofstream fout("secvmaxval.out");
int main(){
    int n;
    long long val;
    long long s = 0;
    int ind = 1, lmax = 0;
    fin >> n >> val;
    int v[200001];
    for(int i = 1; i <= n; i++){
        fin >> v[i];
    }
    for(int i = 1; i <= n; i++){
        s += v[i];
        if(s > val){
            if(i-ind > lmax)
                lmax = i-ind;
            s-=v[ind];
            ind++;
        }
    }
    if(n-ind+1 > lmax)
        lmax = n-ind+1;
    fout << lmax;
}
