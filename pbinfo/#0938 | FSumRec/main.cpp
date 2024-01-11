#include <iostream>
using namespace std;
int s = 0, i = 0;
int v[101];
int suma(int v[], int n){
    if(n)
        return v[n-1] + suma(v, n-1);
    else
        return 0;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << suma(v, n);
}
