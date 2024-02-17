#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[101][101];
    int cnt[101];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    int cntmax = -1;
    int ind = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            if(a[i][j]%2==0)
                cnt[i]++;

        if(cnt[i] > cntmax)
            cntmax = cnt[i];
    }

    for(int i = 1; i <= n; i++)
        if(cnt[i] == cntmax)
            cout << i << " ";
}
