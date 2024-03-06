#include <iostream>
using namespace std;
int n, q;
int a[502][502], s[502][502];
int l1, c1, l2, c2, v;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    cin >> q;
    for(int i = 1; i <= q; i++){
        cin >> l1 >> c1 >> l2 >> c2 >> v;
        s[l1][c1] += v;
        s[l1][c2+1] -= v;
        s[l2+1][c1] -= v;
        s[l2+1][c2+1] += v;
    }

    for(int i = 1; i <= n; i++, cout << endl){
        for(int j = 1; j <= n; j++){
            s[i][j] += (s[i-1][j] + s[i][j-1] - s[i-1][j-1]);
            cout << a[i][j] + s[i][j] << " ";
        }
    }
}
