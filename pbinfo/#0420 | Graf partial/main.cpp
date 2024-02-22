#include <fstream>
using namespace std;
bool a[101][101];
ifstream cin("graf_partial.in");
ofstream cout("graf_partial.out");
int main(){
    int n;
    cin >> n;
    int x, y;
    while(cin >> x >> y){
        a[x][y] = 1;
        a[y][x] = 1;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i%2 == j%2){
                a[i][j] = 0;
                a[j][i] = 0;
            }
        }
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(a[i][j] == 1)
                cnt++;

    cout << cnt/2;
}
