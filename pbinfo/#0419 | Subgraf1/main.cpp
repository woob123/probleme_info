#include <fstream>
#include <vector>
using namespace std;
bool a[101][101];
ifstream cin("subgraf1.in");
ofstream cout("subgraf1.out");
int main(){
    int n;
    cin >> n;
    int x, y;
    while(cin >> x >> y){
        a[x][y] = 1;
        a[y][x] = 1;
    }

    vector<int> nod;
    int mini = 100;
    for(int i = 1; i <= n; i++){
        int cnt = 0;
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1)
                cnt++;
        }
        if(cnt < mini){
            mini = cnt;
            nod.clear();
        }
        if(cnt == mini){
            nod.push_back(i);
        }
    }

    for(int i = 0; i < nod.size(); i++){
        for(int j = 1; j <= n; j++){
            a[nod.at(i)][j] = 0;
            a[j][nod.at(i)] = 0;
        }
    }

    int muchii = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1)
                muchii++;
        }
    }
    cout << muchii/2;
}
