#include <iostream>

using namespace std;
int f[1000000], maxi;
bool chenar(int i, int j, int n, int m){
    return i == 1 || i == n || ((i != 0 && i != n) && (j==1 || j==m));
}
int main(){
    int n, m, cnt = 0;
    cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(chenar(i, j, n, m)){
                if(a[i][j] > maxi)
                    maxi = a[i][j];
                f[a[i][j]]++;
            }
        }

    for(int i = 0; i <= maxi; i++){
        if(f[i]!=0)
            cout << i << " ";
    }

}
