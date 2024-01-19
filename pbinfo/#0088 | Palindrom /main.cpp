#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;
ifstream cin("palindrom.in");
ofstream cout("palindrom.out");
bool palindrom(char c[]){
    int n = 0;
    while(c[n])
        n++;
    n--;
    bool ok = true;
    for(int i = 0; i <= n; i++, n--)
        if(c[i] != c[n])
            ok = false;
    if(ok)
        return 1;
    return 0;
}
int main(){
    int n;
    char a[300];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a;
        cout << palindrom(a) << '\n';
    }
}
