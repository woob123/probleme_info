#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin>>n>>m>>k;
    int nr = 0;
    for (int i = 0; i < n; i++) {
        if (i > 0 && i % k == 0) nr = nr == 1 ? 0 : 1;
        int nr1 = nr;
        for (int j = 0; j < m; j++) {
            if (j > 0 && j % k == 0) {
                nr1 = nr1 == 0 ? 1 : 0;
            }
            cout<<nr1;
        }
        cout<<endl;
    }
    return 0;
}
