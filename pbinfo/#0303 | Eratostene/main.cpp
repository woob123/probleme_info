#include <fstream>
using namespace std;

ifstream cin("eratostene.in");
ofstream cout("eratostene.out");
int n, x;
bool c[1000001];
int main(){
    c[0] = c[1] = 1;
    for(int i = 2; i <= 1000; i++)
        if(c[i] == 0)
            for(int j = 2; i * j <= 1000000; j++)
                c[i*j] = 1;

    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(c[x] == 0)
            cnt++;
    }

    cout << cnt;
}
