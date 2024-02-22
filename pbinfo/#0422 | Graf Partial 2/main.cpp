#include <fstream>
#include <vector>
using namespace std;
bool a[101][101];
ifstream cin("graf_partial_2.in");
ofstream cout("graf_partial_2.out");
int main(){
    int n;
    cin >> n;
    int x, y;
    while(cin >> x >> y){
        a[x][y] = 1;
        a[y][x] = 1;
    }
    int maxi = 0, cnt = 0;
    vector<int> nr;
    for(int i = 1; i <= n; i++){
        int grad = 0;
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1)
                grad++;
        }
        if(grad > maxi){
            maxi = grad;
            nr.clear();
        }
        if(grad == maxi){
            nr.push_back(i);
        }
    }

    for(int j = 0; j < nr.size(); j++) {
        for (int i = 1; i <= n; i++) {
            if (a[nr.at(j)][i] == 1)
                cnt++;
            a[nr.at(j)][i] = 0;
            a[i][nr.at(j)] = 0;
        }
    }

    cout << cnt << '\n';
    for(int i = 1; i <= n; i++, cout << '\n')
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
}
