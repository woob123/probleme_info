#include <iostream>
using namespace std;
int a[1001][1001];
int s[1001][1001];
int n, m, k;
int smax;
void citire(int n, int m, int a[1001][1001], int s[1001][1001]){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            s[i][j] = a[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1];
        }
    }
}
int main(){
    cin >> n >> m >> k;
    citire(n, m, a, s);

    for(int i = 1; i <= k; i++){
        int i1, i2, j1, j2;
        cin >> i1 >> j1 >> i2 >> j2;
        int suma = s[i2][j2] - s[i1-1][j2] - s[i2][j1-1] + s[i1-1][j1-1];
        if(suma > smax)
            smax = suma;
    }
    cout << smax;
}
/*
formula: s[i2][j2] - s[i1-1][j2] - s[i2][j1-1] + s[i1-1][j1-1] -> afisare
formula: s[i][j] = a[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1] -> generare
*/
