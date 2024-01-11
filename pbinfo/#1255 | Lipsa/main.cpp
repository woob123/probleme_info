#include <fstream>
using namespace std;
ifstream cin("lipsa.in");
ofstream cout("lipsa.out");
int main(){
    int n;
    cin >> n;
    int x;
    long long s = 0, s1 = 0;
    for(int i = 1; i <= n; i++){
        s += i;
    }
    for(int i = 1; i < n; i++){
        cin >> x;
        s1 += x;
    }

    cout << s - s1;
}
