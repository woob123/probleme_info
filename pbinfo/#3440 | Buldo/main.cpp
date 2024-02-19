#include <fstream>
using namespace std;
ifstream fin("buldo.in");
ofstream fout("buldo.out");
long long mini = 2100000000, sum;
int main(){
    int n, a;
    fin >> n;
    for(int i = 1; i <= n; i++){
        fin >> a;
        sum += a;
        mini = min(mini, sum/i);
    }
    fout << mini;
}
