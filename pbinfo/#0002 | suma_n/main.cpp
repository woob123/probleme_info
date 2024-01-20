#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x, suma = 0;
    for(int i = 1; i <= n; i++){
        cin >> x;
        suma = suma + x;
    }
    cout << suma;
}
