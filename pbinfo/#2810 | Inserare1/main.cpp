#include <iostream>
using namespace std;
int n;
double a[55][55];
double sume[55];
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            sume[i] += a[j][i];
        }
    }

    for(int i = 1; i <= n/2; i++, cout << endl){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
    }
    for(int i = 1; i <= n; i++){
        cout << sume[i]/n << " ";
    }
    cout << endl;
    for(int i = n/2+1; i <= n; i++, cout << endl){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
    }
}
