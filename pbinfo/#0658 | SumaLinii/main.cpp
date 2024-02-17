#include <iostream>
using namespace std;
int main(){
    int n, m, A[100][100];
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int s = 0;
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
            s += A[i][j];
        }
        cout << s << " ";
    }
}
