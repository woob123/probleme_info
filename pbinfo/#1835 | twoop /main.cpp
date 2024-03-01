#include <fstream>
using namespace std;
long long a[100001], b[100001];
ifstream cin("twoop.in");
ofstream cout("twoop.out");
int main(){
    int n, nrOp1, nrOp2;
    cin >> n;
    cin >> nrOp1;
    cin >> nrOp2;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    int l, r, x;
    for(int i = 1; i <= nrOp1; i++){
        cin >> l;
        cin >> r;
        cin >> x;
        b[l] += x;
        b[r + 1] -= x;
    }

    for(int i = 1; i <= n; i++)
        b[i] += b[i-1];

    int poz;
    for(int i = 1; i <= nrOp2; i++){
        cin >> poz;
        cout << a[poz]+b[poz] << endl;
    }
}
