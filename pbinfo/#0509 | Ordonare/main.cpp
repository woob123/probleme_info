#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int v[1001];
    cin >> n;
    for(int i = 1; i <=  n; i++)
        cin >> v[i];

    sort(v+1, v+n+1);
    for(int i = 1; i <= n; i++)
        cout << v[i] << " ";
}
