#include <iostream>
using namespace std;
int a[25][25];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n; j++){
            if(i < j && i+j < n+1)
                a[i][j] = 1;
            else if((i < j && i+j > n+1) || (i > j && i + j < n+1))
                a[i][j] = 3;
            else if(i > j && i+j > n+1)
                a[i][j] = 2;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
