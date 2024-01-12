#include <iostream>
using namespace std;

int main(){
    int n, k, max = 0;
    cin >> n;
    int b[1001];
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        if(b[i] > max)
            max = b[i], k = i;
    }

    for(int i = 1; i < k; i++)
        for(int j = i + 1; j <= k; j++)
            if(b[i] > b[j]){
                int aux = b[i];
                b[i] = b[j];
                b[j] = aux;
            }

    for(int i = k+1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(b[i] < b[j]){
                int aux = b[i];
                b[i] = b[j];
                b[j] = aux;
            }

    for(int i = 1; i <= n; i++)
        cout << b[i] << " ";
}
