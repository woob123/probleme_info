#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin >> n;
    int a[25001];
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    int m, x;
    cin >> m;
    for(int j = 1; j <= m; j++){
        cin >> x;
        bool ok = false;
        int st = 1, dr = n;
        while(st <= dr){
            int mij = (st+dr)/2;
            if(a[mij] == x){
                ok = true;
                break;
            }
            else if(a[mij] > x)
                dr = mij - 1;
            else
                st = mij + 1;
        }
        if(ok)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}
