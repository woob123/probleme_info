#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[1001];
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++){
            if(a[i] < a[j]){
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }

    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
}
