#include <fstream>
using namespace std;

ifstream cin("clase.in");
ofstream cout("clase.out");

int main(){
    int n, m;
    long long a[10001];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    cin >> m;
    long long x;
    int cnt = 0;
    for(int i = 1; i <= m; i++){
        cin >> x;
        int st = 1, dr = n;
        bool ok = false;
        while(st <= dr){
            int mij = (st+dr)/2;
            if(a[mij] == x){
                ok = true;
                break;
            }
            else
                if(a[mij] < x)
                    st = mij + 1;
                else
                    dr = mij - 1;
        }
        if(ok)
            cnt++;
    }
    cout << cnt;
}
