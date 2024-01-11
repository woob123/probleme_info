#include <iostream>
using namespace std;
int s;
int sumcif(int n){
    if(n){
        sumcif(n/10);
        s += n%10;
    }
    return s;
}
int main(){
    cout << sumcif(2050);
}
