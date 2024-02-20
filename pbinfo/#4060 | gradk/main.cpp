#include <fstream>
using namespace std;
ifstream cin("gradk.in");
ofstream cout("gradk.out");
bool v[101][101]; //matricea de adiacenta

int main(){
    int n, k;
    cin >> n >> k;
    int x, y;
    int alt_cnt = 0;
    int noduri[100];
    while(cin >> x >> y){
        v[x][y] = 1;
        v[y][x] = 1;
    }
    for(int i = 1; i <= n; i++) {
        int cnt = 0;
        for(int j = 1; j <= n; j++){
            if(v[i][j] == 1)
                cnt++;
        }
        if(cnt == k) {
            noduri[alt_cnt] = i;
            alt_cnt++;
        }

    }
    if(alt_cnt == 0)
        cout << "NU EXISTA";
    else {
        cout << alt_cnt << " ";
        for (int i = 0; i < alt_cnt; i++)
            cout << noduri[i] << " ";
    }
}
