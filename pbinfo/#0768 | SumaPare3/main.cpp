#include <iostream>
using namespace std;
bool chenar(int n,int m, int i, int j){
    return i == 1 || i == n || ((i != 1 && i != n) && (j == m || j == 1));
}
int main(){
    int n, m;
    cin >> n >> m;
    int a[101][101];
    int f[100000];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            f[a[i][j]]++;
        }

    int s = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j]%2==0 && f[a[i][j]]!=0){
                s += a[i][j];
                f[a[i][j]]=0;
            }
        }
    }
        
    cout << s;
}
