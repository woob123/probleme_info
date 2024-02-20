#include <fstream>
#include <vector>
using namespace std;
ifstream cin("gradmax.in");
ofstream cout("gradmax.out");
bool v[101][101]; //matricea de adiacenta

int main(){
    int n;
    int maxi = 0;
    cin >> n;
    int x, y;
    int alt_cnt = 0;
    vector<int> noduri;
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
        if(cnt > maxi) {
            maxi = cnt;
            alt_cnt = 0;
            noduri.clear();
        }
        if(cnt == maxi) {
            alt_cnt++;
            noduri.push_back(i);
        }

    }
        cout << alt_cnt << " ";
        for (int i = 0; i < noduri.size(); i++)
            cout << noduri.at(i) << " ";
}
