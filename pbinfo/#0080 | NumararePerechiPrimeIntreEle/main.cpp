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
bool pie(int a,int  b){
    if(cmmdc(a, b) == 1)
        return true;
    return false;
}
int main(){
    int x;
    cin >> x;
    int prev = x;
    int cnt = 0;
    while(x){
        cin >> x;
        if(pie(prev, x))
            cnt++;
        prev = x;
    }
    cout << cnt;
}
