#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int pimp = 1, ppar = 1;
    int n1 = 0, n2 = 0;
    cin >> n;
    while(n){
        if((n%10)%2==0){
            n1 = n1 + ppar*(n%10);
            ppar *= 10;
        }
        else{
            n2 = n2 + pimp*(n%10);
            pimp *= 10;
        }
        n/=10;
    }
    cout << abs(n2-n1);
}
