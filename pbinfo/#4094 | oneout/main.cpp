#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("oneout.in");
ofstream fout("oneout.out");
bool pp(int x){
    return sqrt(x) == (int)(sqrt(x));
}
bool verificare(int n){
    for(int i = 1; i*i <= n; i++){
        if(pp(i) && i != 1)
            return false;
    }
    return true;
}
int main(){
    int n;
    int v[100005];
    int cnt = 0;
    int c;
    fin >> c;
    fin >> n;
    for(int i = 0; i < n; i++) {
        fin >> v[i];
        if(verificare(v[i]))
            cnt++;
    }
    if(c == 1){
        fout << cnt;
    }
}
