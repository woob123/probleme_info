#include <iostream>
#include <cassert>

using namespace std;

int main(){
    int n, a=1, b=1, c;
    cin >> n;
    while(n){
        if(n==1){
            cout << 1;
            n = 0;
        }
        else{
            a = 1, b = 1;
            do
            {
                c = a+b;
                a = b;
                b = c;
            }
            while(c<=n);
            cout << a << " ";
            n -= a;
        }
    }
    return 0;
}
