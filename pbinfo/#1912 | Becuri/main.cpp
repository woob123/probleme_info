#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("becuri.in");
ofstream fout("becuri.out");
bool rad(long long n){
    long long rad = sqrt(n);
    return rad*rad == n;
}
int main(){
    long long n;
    fin >> n;
    int cnt = 0;
    for(long long i = 1; i*i <= n; i++){
            cnt++;
    }
    fout << cnt;
}
