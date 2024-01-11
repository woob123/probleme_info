#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[25][25];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            a[i][j] = (i*j)%10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
