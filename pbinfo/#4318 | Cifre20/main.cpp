#include <iostream>
using namespace std;
int nr_cif(int n){
    int cnt = 0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(x == 0)
            cnt++;
        if(nr_cif(x)%2==1)
            cnt++;
    }
    cout << cnt;
}
