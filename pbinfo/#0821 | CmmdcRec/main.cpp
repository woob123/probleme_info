#include <iostream>
using namespace std;
int  cmmdc(int a, int b){
    if(!a || !b) 
        return a+b;
    if(a > b) 
        return cmmdc(a%b, b);
    return cmmdc(a, b%a);
    
}
int main(){
    cout << cmmdc(18, 24);
}
