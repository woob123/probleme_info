#include <fstream>
#define ll unsigned long long
using namespace std;
ifstream cin("spp.in");
ofstream cout("spp.out");
ll q, x, p;
void cb(){
    ll st = x, dr = 1500000, mid;
    ll remove = x * (x - 1) * (2 * x - 1) / 6;
    while (st <= dr){
        mid = (st + dr) / 2;
        ll suma = mid * (mid + 1) * (2 * mid + 1) / 6;
        if (suma - remove >= p * p)
            dr = mid - 1;
        else st = mid + 1;
    }
    cout << st << "\n";
}
void solve() {
    cin >> q;
    for (int i = 1; i <= q; i++) {
        cin >> x >> p;
        cb();
    }
}
int main() {
    solve();
}
