#include <iostream>
using namespace std;
int nr_div(int n){
    int cnt = 0;
    for(int i = 1; i * i <= n; i++){
        if(n%i == 0){
            cnt +=2;
            if(i*i==n)
                cnt--;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    long long s = 1;
    for(int i = 2; i <= n; i++){
        s = s + nr_div(i);
    }

    cout << s;
}
