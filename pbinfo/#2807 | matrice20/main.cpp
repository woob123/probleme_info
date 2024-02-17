#include <iostream>
using namespace std;

int a, b;
int m[55][55];

int main(){
    cin >> a >> b;
    
    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= b; j++)
            cin >> m[i][j];
    

    int pozmin1=0, pozmin2=0, min1=100001, min2=100001;

    for(int i = 1; i <= a; i++){
        if(m[i][1] < min1){
            min1 = m[i][1];
            pozmin1 = i;
        }
        if(m[i][b] < min2){
            min2 = m[i][b];
            pozmin2 = i;
        }
    }

    swap(m[pozmin1][1], m[pozmin2][b]);

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}
