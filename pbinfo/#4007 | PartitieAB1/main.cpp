#include <iostream>
using namespace std;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int cnta = 0, cntb = 0;
    while(n%b && n >= 0)
        n-=a, cnta++;
    while(n)
        n-=b, cntb++;
    
    for(int i = 1; i <= cnta; i++)
        cout << a << " ";
    for(int i = 1; i <= cntb; i++)
        cout << b << " ";
}
