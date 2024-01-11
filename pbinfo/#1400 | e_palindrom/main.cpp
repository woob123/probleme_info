#include <iostream>
using namespace std;
int f[10001];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        f[x]++;
    }

    int unul_impar=0;
    for(int i = 0; i <= 10000; i++){
        if(f[i] != 0 && f[i]%2 == 1)
            unul_impar++;
        if(unul_impar > 1){
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
}
