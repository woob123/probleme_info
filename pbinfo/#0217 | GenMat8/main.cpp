#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[25][25];
    for(int i = 1; i <= n; i++)
        if(i%2==0)
            for(int j = 1; j <= n; j++)
                a[i][j] = j;
        else
            for(int j = 1; j <= n; j++)
                a[i][j] = i;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
