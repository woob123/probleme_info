#include <iostream>
using namespace std;
int n, m, cnt = 0;
int a[102][102];
int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j-1]%2==0 && a[i-1][j]%2==0 && a[i+1][j]%2==0 && a[i][j+1]%2==0)
                cnt++;
        }
    }
    cout << cnt;
}
