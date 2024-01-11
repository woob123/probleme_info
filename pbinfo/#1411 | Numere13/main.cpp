#include <iostream>
using namespace std;
int pcif(int n){
    while(n >= 10)
        n/=10;
    return n;
}
int main(){
    int a, b;
    int cnt = 0;
    while(a != 0 && b != 0){
        cin >> a >> b;
        if((pcif(a) == pcif(b)) && a!=0 && b !=0)
            cnt++;
    }
    cout << cnt;
}
