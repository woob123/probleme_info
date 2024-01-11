#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int v[101];
    for(int i = 1; i <= n; i++)
        cin >> v[i];

    bool ok = false;
    for(int i = 2; i < n; i++){
        if(v[i-1]%2 == v[i]%2 && v[i+1]%2 == v[i]%2)
            ok = true;
        if(ok){
            cout << "DA";
            return 0;
        }
    }
    cout << "NU";
}
