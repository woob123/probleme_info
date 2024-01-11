#include <fstream>
using namespace std;
ifstream fin("sume2.in");
ofstream fout("sume2.out");
int main(){
    int n;
    fin >> n;
    long long v[100001], s[100001];
    for(int i = 1; i <= n; i++){
        fin >> v[i];
        s[i] = s[i-1] + v[i];
    }

    int m;
    fin >> m;
    for(int i = 1; i <= m; i++){
        int a, b;
        fin >> a >> b;
        fout << s[b] - s[a-1] << endl;
    }
}
