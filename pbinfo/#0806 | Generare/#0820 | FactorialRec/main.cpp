#include <iostream>
using namespace std;
int f = 1;
int factorial(int n){
    if(n){
        factorial(n-1);
        f *= n;
    }
    return f;
}
int main(){
    cout << factorial(4);
}
