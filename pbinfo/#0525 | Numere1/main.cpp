#include <iostream>
using namespace std;
int f[1000];
int x, n;
int main(){ 
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x < 1000)
            f[x]++;
    }
    int cnt = 0, a, b;
    for(int i = 999; cnt < 2 && i > 99; i--){
        if(f[i] == 0){
            cnt++;
            if(cnt == 1)
                b = i;
            else
                a = i;
        }
    }
    if(cnt == 2)
        cout << a << " " << b;
    else
        cout << "NU EXISTA";

}
