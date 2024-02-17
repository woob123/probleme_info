#include <iostream>
using namespace std;
int fr[1000000];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int x;
            cin >> x;
            fr[x]++;
        }
    }
    for(int i = 1000000; i >= 0; i--){
        if(fr[i] >= 2){
            cout << i;
            break;
        }
    }
    cout << "IMPOSIBIL";
}
