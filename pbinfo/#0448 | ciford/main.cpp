#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int v[4];
    for(int i = 1; i <= 3; i++){
        v[i] = n%10;
        n/=10;
    }
    sort(v+1, v+4);
    for(int i = 1; i <= 3; i++){
        cout << v[i] << " ";
    }
}
