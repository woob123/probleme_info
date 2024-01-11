#include <fstream>
using namespace std;
ifstream cin("numere7.in");
ofstream cout("numere7.out");
int f[10];
int main(){
    int a, b;
    cin >> a >> b;
    if(a == 0 && b == 0){
        cout << 0 << 0;
        return 0;
    }
    while(a){
        f[a%10]++;
        a = a/10;
    }
    while(b){
        f[b%10]++;
        b = b/10;
    }
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= f[i]; j++){
            cout << i;
            if(f[0] != 0 && i == 1 && j == 1){
            for(int j = 1; j <= f[0]; j++)
                cout << 0;
            }
        }
    }
}
