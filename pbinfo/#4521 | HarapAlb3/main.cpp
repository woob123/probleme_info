#include <iostream>
using namespace std;
int main(){
    int n;
    int maxi = 0;
    int vecin1, vecin2;
    cin >> n;
    int prev = n%10;
    while(n){
        if(n%10 > maxi){
            maxi = n%10;
            if(n > 1000)
                vecin2 = 0;
            else
                vecin2 = prev;
            if(n < 10)
                vecin1 = 0;
            else
                vecin1 = (n/10)%10;
        }
        prev = n%10;
        n/=10;
    }
    cout << maxi << max(vecin1, vecin2);
}
