#include <iostream>
#define DIM 1010
using namespace std;
int t[DIM], n, i, sol, T, M, st, dr;
int main(){
    cin >> n >> M;
    for (i = 1; i <= n; i++)
        cin >> t[i];
    st = 1;
    dr = M * t[1];
    while (st <= dr){
        T = (st + dr) / 2;
        sol = 0;
        for (i = 1; i <= n; i++)
            sol += T / t[i];
        if (sol < M)
            st = T + 1;
        else
            dr = T - 1;
    }
    cout << st;
    return 0;
}
