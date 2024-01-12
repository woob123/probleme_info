#include <iostream>
using namespace std;

int main(){
    int n, max=0, poz, cnt=0;
    cin >> n;
    int a[1001], b[1001];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i]%10==0)
            cnt++, b[cnt] = a[i];
    }
    if(cnt == 0){
        cout << "NU EXISTA";
        return 0;
    }

    for(int i = 1; i < cnt; i++)
        for(int j = i + 1; j <= cnt; j++){
            if(b[i] < b[j]){
                int aux = b[i];
                b[i] = b[j];
                b[j] = aux;
            }
        }
    for (int i = 1; i <= cnt; i++)
        cout << b[i] << " ";
}
