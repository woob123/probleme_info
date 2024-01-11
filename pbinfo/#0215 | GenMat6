#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    short int a[7][7];
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            if(i == j){
                a[i][j] = 0;
                for(int k = i+1; k <= 6; k++)
                    a[k][j] = n%10;
                for(int k = j+1; k <= 6; k++)
                    a[i][k] = n%10;
                n/=10;
            }
        }
    }

    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
