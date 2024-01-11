#include <iostream>
#include <cmath>
using namespace std;
void sort(int a[], int n){
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);
}
int main(){
    int n, k;
    int v[1001];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    cin >> k;
    
    sort(v, n);
    
    while(k){
        v[k] = -v[k];
        k--;
    }

    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += v[i];

    cout << sum;
}
