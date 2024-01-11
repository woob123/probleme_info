#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("pozitiiconsecutive.in");
ofstream fout("pozitiiconsecutive.out");
int main(){
    int a, b;
    fin >> a >> b;
    int rad = sqrt(b+1);
    for(int i = rad; i > 0; i--)
        fout << i*i - 1 << " ";
}
