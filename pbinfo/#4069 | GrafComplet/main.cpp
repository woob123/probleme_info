#include <iostream>
using namespace std;
bool a[101][101];
int n, k;
void generare_graf_complet(){
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(i != j)
                a[i][j] = 1;
}

int main(){
    cin >> n >> k;
    generare_graf_complet();

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i % k == j % k)
                a[i][j] = 0, a[j][i] = 0;
        }
    }

    for(int i = 1; i <= n; i++, cout << '\n')
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
}
