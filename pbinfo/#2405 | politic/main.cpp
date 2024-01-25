#include <fstream>
using namespace std;
ifstream cin("politic.in");
ofstream cout("politic.out");
int membrii_partide[20001], x, n, k = 1;
long long s, sp[20001];
void read(){
    cin >> n;
    int last = 0;
    membrii_partide[1] = 1;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(i > 1 && x == last + 1)
            membrii_partide[k]++;
        else if(i > 1 && x != last + 1){
            k++;
            membrii_partide[k] = 1;
        }
        last = x;
    }
}
void solve(){
    cout << k << "\n";
    for(int i = 1; i <= k; i++)
        sp[i] = sp[i - 1] + membrii_partide[i];
    for(int i = 1; i <= k; i++){
        int dr = k;
        while(dr >= i && sp[dr] - sp[i - 1] >= n / 2 + 1)
            dr--, s++;
    }
    cout << s;
}
int main(){
    read();
    solve();
}
