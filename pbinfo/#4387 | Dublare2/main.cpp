#include <iostream>
using namespace std;
void verif(int n){
    while(n%10 == 0){
        cout << 0 << 0;
        n/=10;
    }
}
int ogl(int n){
    int o = 0;
    while(n){
        o = o*10 + n%10;
        n/=10;
    }
    return o;
}
int main(){
    int n;
    cin >> n;
    int cn = n;
    n = ogl(n);
    while(n){
        cout << n%10 << n%10;
        n/=10;
    }
    verif(cn);
}
