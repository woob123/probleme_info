#include <iostream>
using namespace std;
int a[200001];
int main(){
    int n, m, i, left, right, x;
    cin >> n >> m;
    for(i = 1; i <= m; i++) {
        cin >> left >> right >> x;
        a[left] += x;
        a[right + 1] -= x;
    }
    for(i = 2; i <= n; i++)
        a[i] += a[i - 1];
    for(i = 1; i <= n; i++)
        cout << a[i] << ' ';
    return 0;
}
