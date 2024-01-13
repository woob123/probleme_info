#include <fstream>
using namespace std;

ifstream cin("secvcresc.in");
ofstream cout("secvcresc.out");

int main(){
    int n;
    int a[10001];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    int u, max = 1, l = 1;
    for(int i = 2; i < n; i++){
        if(a[i-1] < a[i])
            l++;
        else
            l = 1;
        if(l > max)
            max = l, u = i;
    }

    cout << u - max + 1 << " " << u;
}
