#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int v[101];
    for(int i = 1; i <= n; i++)
        cin >> v[i];

    bool ok = true;
    for(int i = 1; i <= n; i++){
        if(v[i]%2 ==1)
            ok = false;
        if(!ok){
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
}
