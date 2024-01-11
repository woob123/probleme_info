#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;

    cout << x << ' ';
    if (x % 2 == 0)
        cout << x-1 << ' ';
    else
        x++;

    while(x!=2){
        x /= 2;
        cout << x << ' ' << x-1 << ' ';
    }
    return 0;
}
