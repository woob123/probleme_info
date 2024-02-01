#include <fstream>
using namespace std;
int n, k, c, v[10005];
int prim3(int n){
    if (n<2) return false;
    int d=2, nr = 0;
    while (n!=1 && nr<=3){
        while (n%d==0 && nr<=3){
            n/=d;
            nr++;
        }
        d++;
    }
    if (n==1 && nr<=3) return 1;
    return 0;
}
int main(){
    ifstream fin("numere23.in");
    ofstream fout("numere23.out");
    fin>>n>>k>>c;
    if (c==1){
        int val = 1;
        while (n){
            val++;
            if (prim3(val)) n--;
        }
        fout<<val;
    }
    else{
        int val = 1, poz = 1, cn=n;
        while (!prim3(val)) val++;
        v[1]=val;
        cn--;
        while (cn){
            while (!prim3(++val));
            int ck = k;
            ck = k;
            while (ck){
                poz++;
                if (poz>n) poz = poz%n;
                if (v[poz] == 0)
                {
                    ck--;
                }
            }
            v[poz]=val;
            cn--;
        }
        for (int i=1; i<=n; i++)
            fout<<v[i]<<" ";
    }
}
