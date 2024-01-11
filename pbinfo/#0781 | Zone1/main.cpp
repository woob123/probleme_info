#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[101][101];
    int sume[5];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i < j && i+j < n+1)
                sume[1] += a[i][j];
            else if(i < j && i+j > n+1)
                sume[2] += a[i][j];
            else if(i > j && i+j < n+1)
                sume[3] += a[i][j];
            else if(i > j && i+j > n+1)
                sume[4] += a[i][j];
        }
    }
    for(int i = 1; i <= 4; i++)
        for(int j = i+1; j <= 4; j++)
            if(sume[i] > sume[j])
                swap(sume[i], sume[j]);
    for(int i = 1; i <= 4; i++)
        cout << sume[i] << " ";
}
