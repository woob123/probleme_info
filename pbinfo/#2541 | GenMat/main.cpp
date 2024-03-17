#include <iostream>
using namespace std;

int n;
int a[16][16];

void fill(){
    for(int i = 1; i <= n; i++){
        a[i][1] = i+1;
        a[i][n] = i+n;
        a[1][i] = i+1;
        a[n][i] = i+n;
    }

    for(int j = n-1; j > 1; j--){
        for(int i = 2; i < n; i++){
            a[i][j] = a[i][j+1] + a[i-1][j+1] + a[i+1][j+1];
        }
    }
}

void afis(){
    for(int i = 1; i <= n; i++, cout << endl)
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
}

void solve(){
    fill();
    afis();
}

int main(){
    cin >> n;
    solve();
}
