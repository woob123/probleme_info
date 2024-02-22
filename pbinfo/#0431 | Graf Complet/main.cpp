#include <fstream>
using namespace std;
ifstream cin("graf_complet.in");
ofstream cout("graf_complet.out");
void verif(int a[50][50], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && a[i][j] == 0) {
                cout << "NU" << '\n';
                return;
            }
        }
    }
    cout << "DA" << '\n';
}
int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n;
        cin >> n;
        int a[50][50];
        for(int j = 0; j < n; j++)
            for(int k = 0; k < n; k++)
                cin >> a[j][k];

        verif(a, n);
    }
}
