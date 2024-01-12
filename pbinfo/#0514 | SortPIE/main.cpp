#include <iostream>
using namespace std;


int main(){
    int n, cnt = 0;
    cin >> n;
    int a[1001], b[1001];
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++){
        int x = a[i];
        int y = a[n];
        while(y){
            int r = x%y;
            x = y;
            y = r;
        }
        if(x == 1)
            cnt++, b[cnt] = a[i];
    }

    for(int i = 1; i < cnt; i++)
        for(int j = i + 1; j <= cnt; j++)
            if(b[i] < b[j]){
                int aux = b[i];
                b[i] = b[j];
                b[j] = aux;
            }

    for(int i = 1; i <= cnt; i++)
        cout << b[i] << " ";
}
