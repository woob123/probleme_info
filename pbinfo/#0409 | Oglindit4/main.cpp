#include <iostream>
using namespace std;
int ogl(int n){
    int ogl = 0;
    while(n){
        ogl = ogl*10 + n%10;
        n/=10;
    }
    return ogl;
}
int cmmdc(int a, int b){
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
bool pie(int a,int  b){
    if(cmmdc(a, b) == 1)
        return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    int d = 2;
    int p, pmax = 0, nr = 0;
    while(n > 1){
        p = 0;
        while(n%d){
            n/=d;
            p++;
        }
        if(p > pmax)
            pmax = p, nr = d;
        else if(p == pmax && d > nr)
            nr = d;

        d++;
        if(n > 1 && d*d > n)
            d = n;
    }
    cout << nr;
}
