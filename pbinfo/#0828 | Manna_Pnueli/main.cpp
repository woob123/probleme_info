#include <iostream>
using namespace std;
int mp(int n){
    if(n > 12 || n == 12)
        return n-1;
    else{
        return mp(mp(n+2));
    }
}
int main(){
    cout << mp(11);
}
