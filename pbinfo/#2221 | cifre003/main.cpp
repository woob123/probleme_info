#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cn = n;
    int sum = 0;
    while(cn){
        sum += cn%10;
        cn/=10;
    }

    int cnt = 0;
    while(n){
        if((sum - (n%10))%3 == 0)
            cnt++;
        n/=10;
    }

    cout << cnt;
}
