#include <fstream>
using namespace std;
ifstream f("maxim.in");
ofstream g("maxim.out");
int main(){
    int a, b;
    f >> a >> b;
    if (a >= b){
        g << a;
    }
    else {
        g << b;
    }
    return 0;
}
