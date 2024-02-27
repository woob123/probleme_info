#include <fstream>
using namespace std;
ifstream cin("exp.in");
ofstream cout("exp.out");
int frec[15002];
void desc(int n){
    int d = 2;
    int p;
    while(n > 1){
        p = 0;
        while(n%d == 0){
            n/=d;
            p++;
        }
        if(p){
            frec[d] += p;
        }
        d++;
        if(n > 1 && d*d > n){
            d = n;
        }
    }
}
int main(){
    int n, m;
    cin >> m;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        desc(x);
    }
    for(int i = 1; i <= 15001; i++){
        if(frec[i] != 0 && frec[i] % m != 0){
            cout << 0;
            return 0;
        }
    }
    cout << 1 << '\n';
    for(int i = 1; i <= 15001; i++){
        if(frec[i] != 0){
            cout << i << " " << frec[i]/m << '\n';
        }
    }
}
