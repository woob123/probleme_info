#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int t, k, cnt = 0;
    int n;
    int v[100001];
    cin >> n >> t >> k;
    for(int i = 1; i <= n; i++)
        cin >> v[i];

    int l = 0;
    for(int i = 1; i <= n; i++){
        if(v[i] <= t)
            l++;
        else
            l = 0;
        if(l >= k)
            cnt++;
    }
    cout << cnt;
}
