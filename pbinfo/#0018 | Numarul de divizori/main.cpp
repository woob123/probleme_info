#include <fstream>
using namespace std;
ifstream fin("nrdiv.in");
ofstream fout("nrdiv.out");
int main(){
    int n;
    fin >> n;
    int cnt = 1;
    int d = 2;
    int p;
    while(n > 1){
        p = 0;
        while(n%d == 0){
            p++;
            n/=d;
        }
        if(p){
            cnt = cnt * (p+1);
        }
        d++;
        if(d*d > n && n > 1){
            d = n;
        }
    }
    fout << cnt;
}
