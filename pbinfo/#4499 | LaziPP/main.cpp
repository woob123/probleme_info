#include <iostream>
using namespace std;
int main(){
    int x;
    int h;
    int min = 101;
    for(int i = 1; i <= 3; i++){
        cin >> x;
        if(x < min){
            min = x;
        }
    }
    cin >> h;
    cout << (h*100)/min;
}
