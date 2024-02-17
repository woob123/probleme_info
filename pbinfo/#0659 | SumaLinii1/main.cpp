#include <iostream>
using namespace std;

int a, b;
int m[101][101];

int main(){
    cin >> a >> b;
    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= b; j++)
            cin >> m[i][j];
    
    for(int i = 1; i <= a; i++){
        int maxi = 0, s = 0;
        for(int j = 1; j <= b; j++){
            if(m[i][j] > maxi)
                maxi = m[i][j];
            s += m[i][j];
        }
        cout << s - maxi << " ";
    }
}
