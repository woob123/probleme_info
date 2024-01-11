#include <iostream>
using namespace std;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int cnta = 0, cntb = 0;
    while(n%a && n >= 0)
        n-=b, cntb++;
    while(n)
        n-=a, cnta++;
    
    for(int i = 1; i <= cnta; i++)
        cout << a << " ";
    for(int i = 1; i <= cntb; i++)
        cout << b << " ";
}
