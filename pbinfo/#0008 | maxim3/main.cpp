#include <fstream>
using namespace std;
ifstream f("maxim3.in");
ofstream g("maxim3.out");
int main(){
    int a, b, c;
    f >> a >> b >> c;
    int maxi = 0;
    if (a > maxi)
        maxi = a;
    if (b > maxi)
        maxi = b;
    if (c > maxi)
        maxi = c;
    g << maxi;
}
