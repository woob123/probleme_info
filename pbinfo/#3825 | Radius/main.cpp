#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067
using namespace std;

int main(){
    double n,L;
    cin>>n>>L;
    long long int r=(long long int)(1.0*L/(2.0*sin(180/n*PI/180))*100);
    cout<<fixed<<setprecision(2)<<1.0*r/100;
    return 0;
}
