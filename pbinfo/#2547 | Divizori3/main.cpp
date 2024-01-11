#include <iostream>
#include <cmath>
using namespace std;
bool prim(int n){
    if(n == 1 || n == 0 || (n%2 == 0 && n != 2))
        return false;
    for(int d = 3; d*d <= n; d+=2)
        if(n%d==0)
            return false;
    return true;
}
int rad(int a){
    int rad = sqrt(a);
    if(rad*rad != a)
        rad++;
    return rad;
}
int main(){
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i= rad(a); i*i <= b; i++){
        if(prim(i))
            cnt++;
    }
    cout << cnt;
}
