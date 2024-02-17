#include <iostream>
using namespace std;
int main(){
    int n, m, A[100][100], s = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
            if(A[i][j]%2==0)
                s+=A[i][j];
        }
    }
    cout << s;
}
