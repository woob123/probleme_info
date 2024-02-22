#include <fstream>
#include <vector>
using namespace std;
bool a[101][101];
ifstream cin("graf_partial_5.in");
ofstream cout("graf_partial_5.out");
int main(){
    int n, k;
    cin >> n >> k;
    int x, y;
    while(cin >> x >> y){
        a[x][y] = 1;
        a[y][x] = 1;
    }
    vector<int> noduri;
    for(int i = 1; i <= n; i++){
        int cnt = 0;
        for(int j = 1; j <= n; j++)
            if(a[i][j] == 1)
                cnt++;
        if(cnt >= k){
            noduri.push_back(i);
        }
    }

    for(int i = 0; i < noduri.size(); i++){
        for(int j = 0; j < noduri.size(); j++){
            a[noduri.at(i)][noduri.at(j)] = 0;
            a[noduri.at(j)][noduri.at(i)] = 0;
        }
    }

    for(int i = 1; i <= n; i++, cout << '\n')
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
}
