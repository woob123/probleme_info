#include <iostream>
using namespace std;
int cmmdc(int a, int b){
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int n;
    int maxi = 0, mini = 1e9;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(x > maxi)
            maxi = x;
        if(x < mini)
            mini = x;
    }
    cout << cmmdc(maxi, mini);
}
