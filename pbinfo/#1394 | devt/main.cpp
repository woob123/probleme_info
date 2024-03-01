#include <fstream>

using namespace std;

ifstream cin("devt.in");
ofstream cout("devt.out");

int ciur[100001], s[100001];

void gen_ciur(){
    ciur[0] = ciur[1] = 1;
    for ( int i = 2; i <= 1000; ++i )
        if ( ciur[i] == 0 )
            for ( int j = 2; i * j <= 100000; ++j )
                ciur[i * j] = 1;
}

int main(){
    int n, k, a, b;
    cin >> n >> k;
    gen_ciur();
    for ( int x = 1 ; x <= n ; x++ )
        s[x] = s[x - 1] + ciur[x];
    while(k--){
    cin >> a >> b;
    cout << s[b] - s[a - 1] << '\n';
    }
    return 0;
}
