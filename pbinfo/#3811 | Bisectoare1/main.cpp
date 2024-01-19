#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	double a,b,c;
	double ba,bb,bc;
	cin >> a >> b >> c;
 		if((a > b + c) || (b > a + c) || (c > a + b)){
 			cout << "Imposibil";
		return 0;
		}
    double p=(a+b+c)/2;
    ba = sqrt((4*b*c)/((b+c)*(b+c)) * p*(p-a));
    bb = sqrt((4*a*c)/((a+c)*(a+c)) * p*(p-b));
    bc = sqrt((4*a*b)/((a+b)*(a+b)) * p*(p-c));
    int aux;
    aux=ba*100;
    ba=(double)aux/100;
    aux=bb*100;
    bb=(double)aux/100;
    aux=bc*100;
    bc=(double)aux/100;
    cout << fixed << setprecision(2) << ba << " "  << bb << " " << bc;
}
