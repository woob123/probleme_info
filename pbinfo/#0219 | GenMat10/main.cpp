#include <fstream>
using namespace std;
ifstream cin("sortcif.in");
ofstream cout("sortcif.out");
int main(){
    int n, m;
    int a[25][25];
    cin >> n >> m;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            a[i][j] = (m*n)-cnt;
            cnt++;
        }
    }
    for(int i = 1; i <= n; i++, cout << '\n'){
        for(int j = 1; j <= m; j++){
            cout << a[i][j] << " ";
        }
    }
}
