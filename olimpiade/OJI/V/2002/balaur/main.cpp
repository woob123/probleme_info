#include <fstream>

using namespace std;

ifstream fin("balaur.in");
ofstream fout("balaur.out");
int n;
long long s;

int main(){
    fin >> n;
    s = 1LL * 5 * n;
    fout << s;
    return 0;
}
