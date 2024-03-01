#include <fstream>

#define MOD 1999999973
using namespace std;
ifstream cin("sirdivk.in");
ofstream cout("sirdivk.out");
int main(){
    int a, b, c, n, k;
    cin >> a >> b >> c >> n >> k;

    int r = 0, cnt = 0;
    for(int i = 1; i <= n; i++){
        switch(i%3){
            case 1: r = (r*10 + a)%k; break;
            case 2: r = (r*10 + b)%k; break;
            case 0: r = (r*10 + c)%k; break;
        }
        if(r==0)
            cnt++;
    }
    cout << cnt;
}
