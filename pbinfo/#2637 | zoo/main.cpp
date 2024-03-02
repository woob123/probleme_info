#include <fstream>
using namespace std;
ifstream cin("zoo.in");
ofstream cout("zoo.out");
int n, m;
int a[101][101];
long long s[101][101];
void citire(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            s[i][j] = a[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1];
        }
    }
}
int main(){
    citire();
    int q;
    cin >> q;
    for(int i = 1; i <= q; i++){
        int i1, j1, i2, j2;
        cin >> i1 >> j1 >> i2 >> j2;
        cout << s[i2][j2] - s[i1-1][j2] - s[i2][j1-1] + s[i1-1][j1-1] << '\n';
    }
}
