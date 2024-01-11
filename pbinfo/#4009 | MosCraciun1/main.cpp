#include <iostream>
#include <algorithm>
using namespace std;
int n, s;
int v[1001];
void sortare(int a[], int n){
    for(int i = 1; i <= n; i++)
        for(int j = i+1; j <= n; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);
}
int main(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++)
        cin >> v[i];

    sortare(v, n);
    int cnt = 0;
    for(int i = 1; i <= n && v[i] <= s; i++){
        cnt++, s-=v[i];
    }
    cout << cnt << " ";
    if(cnt == n)
        cout << 0 << endl;
    else
        cout << v[cnt+1] - s;
}
