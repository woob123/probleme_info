#include <bits/stdc++.h>
using namespace std;
int a[200005] , n , T;
int Caut_Bin(int x){
    int st = 1 , dr = n , mij , poz = 0;
    while(st <= dr){
        mij = ( st + dr ) / 2;
        if(a[mij] <= x){
            poz = mij;
            st = mij + 1;
        }
        else dr = mij - 1;
    }
    return poz;
}
int main(){
    int x , y;
    cin >> n >> T;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
    sort(a + 1 , a + n + 1);
    while(T--){
        cin >> x >> y;
        cout << Caut_Bin(y) - Caut_Bin(x - 1) << "\n";
    }
    return 0;
}
