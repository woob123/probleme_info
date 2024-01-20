#include <fstream>
using namespace std;
ifstream fin("sum.in");
ofstream fout("sum.out");
int main(){
    int a, b;
    fin >> a >> b;
    fout << a + b;
    return 0;
}
