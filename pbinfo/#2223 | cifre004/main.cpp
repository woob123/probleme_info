#include <iostream>
using namespace std;
int sum_cif(int n){
    int s = 0;
    while(n){
        s += n%10;
        n /= 10;
    }
    return s;
}
int nr_cif(int n){
    int cnt = 0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    int sum = sum_cif(n);
    int csum = sum;

    for(int i = 1; i <= csum; i++){
        if(sum > 9){
            cout << 9;
            sum -= 9;
        }
        else if(sum == 0)
            cout << 0;
        else if (sum <= 9 && sum > 0){
            cout << sum;
            sum -= sum;
        }
    }
}
