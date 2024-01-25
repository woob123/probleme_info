#include <fstream>
#define ll long long
using namespace std;
ifstream cin("pitici.in");
ofstream cout("pitici.out");
ll sp[200001], pitickg, x, nr, maxi;
int n, vcase[200001], mars[200001];
void parcurgere_mars() {
    for (int i = 1; i <= n; i++){ 
        mars[i] += mars[i - 1];
        if (maxi < mars[i]) {
            nr = 1;
            maxi = mars[i];
        }
        else if (maxi == mars[i])
            nr++;
    }
}
int binsearch(ll x, ll k){
    int st = 1, dr = n, poz = n + 1;
    while (st <= dr) {
        int mid = (st + dr) / 2;
        if (x <= sp[mid] - k){
            dr = mid - 1;
            poz = mid;
            
        }
        else st = mid + 1;
    }
    return poz;
}
void read(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> pitickg;
        sp[i] = sp[i - 1] + pitickg;
    }
    for (int i = 1; i <= n; i++){
        cin >> x;
        ll ct = sp[i - 1];
            int poz = binsearch(x, ct);
            mars[i]++;
            mars[poz + 1]--;
    }
    parcurgere_mars();
}
int main(){
    read();
    cout << maxi << " " << nr;
}
