#include <fstream>
using namespace std;

ifstream cin("numere9.in");
ofstream cout("numere9.out");
int n, x;
bool f[250000] = {false};
int main(){
    cin >> n;
    while(cin >> x){
        f[x] = true;
    }

    int mini = n*n+1;
    int maxi = 0;
    int sq = n*n;
    for(int i = 1; i <= sq; i++){
        if(!f[i]){
            if(i < mini)
                mini = i;
            if(i > maxi)
                maxi = i;
        }
        
    }
    cout << mini << " " << maxi;
}
