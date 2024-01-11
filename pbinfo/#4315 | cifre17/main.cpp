#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cn = n, cnt = 0;
    while(cn > 99){
        cn /= 10;
    }
    while(n){
        if(n%10 > cn%10)
            cnt++;
        n/=10;
    }
    cout << cnt;
}
