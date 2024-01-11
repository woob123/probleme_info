#include <iostream>
using namespace std;
int main(){
    int n, t;
    int T[1001];
    int sol = 0;
    cin >> n >> t;
    for(int i = 1; i <= n; i++){
        cin >> T[i];
        sol += t/T[i];
    }
    cout << sol;
}
