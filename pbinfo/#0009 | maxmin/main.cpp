#include <iostream>
using namespace std;
int main(){
    int x;
    int maxi = 0, mini = 1000000000;
    for(int i = 1; i <= 3; i++){
        cin >> x;
        if(x > maxi)
            maxi = x;
        if(x < mini)
            mini = x;
    }
    cout << maxi - mini;
}
