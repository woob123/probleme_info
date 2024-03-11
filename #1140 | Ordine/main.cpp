#include <fstream>
using namespace std;
ifstream cin("ordine.in");
ofstream cout("ordine.out");
int v[250001];
int n, c;
int main(){
    cin >> n;
    int j = 1;
    for(int i = 1; i <= n; i++){
        cin >> v[j];
        j += 2;
        if(j > n)
            j = 2;
    }
    cin >> c;
    if(c == 2) {
        for (int i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }
    }
    else{
        cout << v[n];
    }
    cout << '\n';
}
