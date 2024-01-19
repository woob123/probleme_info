#include <iostream>
#include <cmath>
#include <iomanip>
#define Dist(x, y) (x * x + y * y)
using namespace std;
int n;
int main(){
    std::cin >> n;
    int nrApar = 0;
    double dist, distMax = 0;
    while(n--){
        int x, y;
        cin >> x >> y;
        dist = Dist(x, y);
        if(dist > distMax)
            distMax = dist, nrApar = 1;
        else if(dist == distMax)
            nrApar++;
    }
    cout << fixed << setprecision(3) << sqrt(distMax) << " " << nrApar;
    return 0;
}
