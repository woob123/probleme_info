#include <iostream>
using namespace std;
int n, m, k;
int a[101][101], s[101][101];
int main(){
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            s[i][j] = a[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1];
        }
    }

    int maxi = 0;
    for(int i = 1; i <= k; i++){
        int i1, j1, i2, j2;
        cin >> i1 >> j1 >> i2 >> j2;
        int sum = s[i2][j2] - s[i1-1][j2] - s[i2][j1-1] + s[i1-1][j1-1];
        if(sum > maxi)
            maxi = sum;
    }

    cout << maxi;
}
