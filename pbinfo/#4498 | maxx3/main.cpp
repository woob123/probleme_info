#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a, b, c;
    if(n%10 > m%10)
        a = (n%10)*10+(m%10);
    else
        a = (m%10)*10+(n%10);
    n/=10, m/=10;

    if(n%10 > m%10)
        b = (n%10)*10+(m%10);
    else
        b = (m%10)*10+(n%10);
    n/=10, m/=10;

    if(n%10 > m%10)
        c = (n%10)*10+(m%10);
    else
        c = (m%10)*10+(n%10);
    n/=10, m/=10;

    cout << c << " " << b << " " << a;
}
