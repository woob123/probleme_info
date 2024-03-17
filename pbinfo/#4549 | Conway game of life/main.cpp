#include <fstream>
#include <vector>
using namespace std;
ifstream cin("conway.in");
ofstream cout("conway.out");

int n, d;
int a[105][105];
vector<int> iuri0;
vector<int> juri0;
vector<int> iuri1;
vector<int> juri1;

int cnt_vecini(int i, int j){
    int cnt = 0;
    cnt = cnt + a[i-1][j] + a[i+1][j] + a[i][j+1] + a[i][j-1] + a[i-1][j-1] + a[i+1][j+1] + a[i+1][j-1] + a[i-1][j+1];
    return cnt;
}

void afis(){
    for(int i = 1; i <= n; i++, cout << '\n'){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
    }
}

void change(){
    for(int i = 0; i < iuri0.size(); i++){
        a[iuri0.at(i)][juri0.at(i)] = 0;
    }
    for(int i = 0; i < iuri1.size(); i++){
        a[iuri1.at(i)][juri1.at(i)] = 1;
    }
    iuri0.clear(), juri0.clear(), iuri1.clear(), juri1.clear();
}

int main(){
    cin >> n >> d;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    for(int k = 1; k <= d; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][j] == 1){
                    if(cnt_vecini(i, j) < 2 || cnt_vecini(i, j) > 3)
                        iuri0.push_back(i), juri0.push_back(j);
                    else if(cnt_vecini(i, j) == 2 || cnt_vecini(i, j) == 3)
                        continue;
                }
                if(a[i][j] == 0 && cnt_vecini(i, j) == 3)
                    iuri1.push_back(i), juri1.push_back(j);
            }
        }
        change();
    }

    for(int i = 1; i <= n; i++, cout << '\n'){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
    }
}
