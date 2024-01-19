#include <fstream>

using namespace std;

ifstream f("rapunzel.in");
ofstream g("rapunzel.out");

int main(){
    long long n;
    int m1, m2, zi;
    f >> n >> m1 >> m2;
    zi = m1 + m2;
    if (n % zi == 0){
        g << n / zi;
    }
    else {
        g << n / zi + 1;
    }
    return 0;
}
