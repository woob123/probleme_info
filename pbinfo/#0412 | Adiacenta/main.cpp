#include <iostream>
using namespace std;
bool v[101][101]; //matricea de adiacenta
int m; // nr de muchii
int n; //nr de noduri

int main(){
    cin >> n >> m;
    int x, y;
    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        v[y][x] = 1;
        v[x][y] = 1;
    }

    for(int i = 1; i <= n; i++, cout << '\n'){
        for(int j = 1; j <= n; j++) {
            cout << v[i][j] << " ";
        }
    }
}
