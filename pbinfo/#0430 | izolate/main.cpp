#include <fstream>
using namespace std;
ifstream cin("grade.in");
ofstream cout("grade.out");
bool v[101][101]; //matricea de adiacenta

int main(){
    int n;
    cin >> n;
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
        if(cnt == 0) {
            noduri[alt_cnt] = i;
            alt_cnt++;
        }

    }
    cout << alt_cnt;
    for(int i = 0; i < alt_cnt; i++)
        cout << " " << noduri[i];
}
