#include <iostream>
using namespace std;

int v[10001];

int main(){
    int n, t1, t2;
    cin >> n >> t1 >> t2;
    for (int i = 0; i < n; ++i){
        int a, b; cin >> a >> b;
        for (int j = a; j < b; ++j)
            ++v[j];
    }
    int c = 0;
    for (int i = t1; i < t2; ++i)
        if (v[i] == 0) ++c;
    cout << c;  
    return 0;
}
