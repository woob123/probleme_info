#include <fstream>
using namespace std;
const int nMAX = 10e3;
ifstream cin("subsecv.in");
ofstream cout("subsecv.out");
int n;
int v[nMAX + 1];
int main(){
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    for (int i = 1; i <= n; ++i){
        long long s = 0;
        for (int j = i; j <= n; ++j){
            s += v[j];
            if (s % n == 0){
                cout << i << ' ' << j;
                return 0;
            }
        }
    }
}
