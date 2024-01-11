#include <iostream>
using namespace std;
long long s[1000001];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> s[i];
        s[i] += s[i-1];
    }

    int m;
    cin >> m;
    long long smax = 0;
    for(int i = 1; i <= m; i++){
        int a, b;
        cin >> a >> b;
        if(a > b)
            swap(a, b);
        if((s[b] - s[a-1]) > smax)
            smax = s[b] - s[a-1];
    }
    cout << smax;
}
