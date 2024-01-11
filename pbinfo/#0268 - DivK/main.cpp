#include <fstream>
using namespace std;
ifstream fin("divk.in");
ofstream fout("divk.out");
int nr_div(int n){
    int cnt = 0;
    for(int d = 1; d * d <= n; ++d){
        if(n%d==0){
            cnt += 2;
            if(d*d == n)
                cnt -= 1;
        }
    }
    return cnt;
}
int main(){
    int n, k;
    fin >> n >> k;
    for(int i = 1; i <= n; i++){
        int x;
        fin >> x;
        if(nr_div(x) >= k)
            fout << x << " ";
    }
}
