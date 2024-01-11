#include <iostream>
using namespace std;
int cmmdc(int a, int b){
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    float frac1 = a/b;
    float frac2 = c/d;

    if(frac1 > frac2)
        cout << a/cmmdc(a,b) << " " << b/cmmdc(a,b);
    else
        cout << c/cmmdc(c,d) << " " << d/cmmdc(c,d);
}
