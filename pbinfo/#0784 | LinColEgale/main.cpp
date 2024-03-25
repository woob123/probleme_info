#include <iostream>
using namespace std;
int n;
int a[101][101];
bool check(int i, int j){
    int sumi = 0, sumj = 0;
    for(int k  = 1; k <= n; k++)
        sumi += a[k][j];
    for(int k = 1; k <= n; k++)
        sumj += a[i][k];
    return sumi == sumj;
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(check(i, j))
                cnt++;
        }
    }
    cout << cnt;
}
