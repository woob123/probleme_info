#include <iostream>
using namespace std;
int main(){
    int n, k, m, p;
    cin >> n >> k >> m >> p;
    long long copii7 = n*k;
    long long copii8 = m*p;
    int a = copii7, b = copii8;
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    cout << copii7/a + copii8/a << " " << copii7/a << " " << copii8/a << " " << a;
}
