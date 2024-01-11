#include <iostream>
using namespace std;
int sum_cifp(int n){
    int s = 0;
    while(n){
        if((n%10)%2==0)
            s += n%10;
        n /= 10;
    }
    return s;
}
int sum_cifi(int n){
    int s = 0;
    while(n){
        if((n%10)%2==1)
            s += n%10;
        n /= 10;
    }
    return s;
}
int main(){
    long long sum = 0;
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
        if(sum_cifi(i) == sum_cifp(i))
            sum += i;
    cout << sum;
}
