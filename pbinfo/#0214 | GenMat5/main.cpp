#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[11][11];
    int cn = n, nrcif = 0;
    while(cn){
        nrcif++;
        cn /= 10;
    }

    for(int i = 1; i <= nrcif; i++){
        for(int j = 1; j <= nrcif; j++){
            a[i][j] = n%10;
        }
        n/=10;
    }

    for(int i = 1; i <= nrcif; i++){
        for(int j = 1; j <= nrcif; j++){
            cout << a[j][1] << " ";
        }
        cout << endl;
    }
}
