#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("numarare8.in");
ofstream cout("numarare8.out");
bool prim(int n){
    if(n < 2 || (n%2==0 && n!=2))
        return false;
    for(int i = 3; i*i <= n; i+=2)
        if(n%i==0)
            return false;
    return true;
}
int fr[1000];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(x < 1000)
            fr[x]++;
    }
    int cnt = 0;
    for(int i = 100; i < 1000; i++){
        if(prim(i) && (fr[i] == 0))
            cnt++;
    }
    cout << cnt;
}
