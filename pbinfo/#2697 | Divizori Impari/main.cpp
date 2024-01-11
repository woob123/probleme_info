#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        long long x;
        cin >> x;
        while(x%2==0) x/=2;
        cout << x << " ";
    }
}
