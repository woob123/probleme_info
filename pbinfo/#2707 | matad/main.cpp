#include <iostream>
using namespace std;
bool v[101][101]; //matricea de adiacenta

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> v[i][j];

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            if (v[i][j] != v[j][i]) {
                cout << 0;
                return 0;
            }
            else if(i == j && v[i][j] == 1){
                cout << 0;
                return 0;
            }
        }
    cout << 1;
}
