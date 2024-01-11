#include <iostream>
using namespace std;
bool is_prim(int n){
    if(n == 1 || n == 0)
        return false;
    else if(n != 2 && n % 2 == 0)
        return false;
    for(int x = 3 ; x * x <= n ; x += 2)
        if(n % x == 0)
        return false;
    return true;
}
int n;
int main(){
    cin>>n;
    for(int ctm = 1 ; ctm <= n ;){
        for(int x = 3 , j = 5 ; ctm <= n ; x += 2, j += 2)
            if(is_prim(x) == true && is_prim(j) == true){
                cout<<x<<" "<<j<<endl;
                ctm++;
        }
    }
}
