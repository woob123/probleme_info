#include <fstream>
using namespace std;
ifstream cin("maria.in");
ofstream cout("maria.out");
int n, m, p, q, k;
int a[1001][1001], s[1001][1001];
int main(){
    cin >> n >> m >> p >> q;
    cin >> k;
    for(int i = 1; i <= k; i++){
        int ii, jj;
        cin >> ii >> jj;
        a[ii][jj] = 1;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            s[i][j] = a[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1];
        }
    }

    int cnt = 0;
        for(int i = 1; i <= n-p+1; i++){
            for(int j = 1; j <= m-q+1; j++){
                if((s[i+p-1][j+q-1] - s[i-1][j+q-1] - s[i+p-1][j-1] + s[i-1][j-1]) == 0){
                    cnt++;
                }
            }
        }
        if (p != q) {
            for(int i = 1; i <= n-q+1; i++){
                for(int j = 1; j <= m-p+1; j++){
                    if((s[i+q-1][j+p-1] - s[i-1][j+p-1] - s[i+q-1][j-1] + s[i-1][j-1]) == 0){
                        cnt++;
                    }
                }
            }   
        }
        cout << cnt;
}
