#include <fstream>
using namespace std;
ifstream cin("matrice7.in");
ofstream cout("matrice7.out");
void citire(int a[101][101], int n, int m){
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
}
void afisare(int a[101][101], int n, int m){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
int main(){
    int a[101][101];
    int n,m;
    cin >> n >> m;
    citire(a, n, m);

    int maxi = -1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] > maxi)
                maxi = a[i][j];
        }
    }
     for(int i = 1; i <= m; i++){
        int mini = 1000000000;
        for(int j = 1; j <= n; j++){
            if(a[j][i] < mini)
                mini = a[j][i];
        }
        for(int j = 1; j <= n; j++){
            if(a[j][i] == maxi)
                a[j][i] = mini;
        }
     }
     afisare(a, n, m);
}
