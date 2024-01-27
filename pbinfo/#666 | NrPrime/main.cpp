#include <iostream>
using namespace std;
bool prim(int n){
    int cnt = 0;
    for(int d = 1; d*d <= n; d++){
        if(n%d==0){
            cnt++;
            if(d*d < n)
                cnt++;
        }
    }
    return cnt == 2;
}
int main(){
    int n, m, A[101][101];
    int cnt = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i%2==0 && prim(A[i][j]))
                cnt++;
        }
    }
    cout << cnt;
}
