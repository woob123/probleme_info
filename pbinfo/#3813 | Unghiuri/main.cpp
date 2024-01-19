#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm> 
#include <cstring>
using namespace std;
string NumeFisier = "date";
ifstream fin(NumeFisier + ".in");
ofstream fout(NumeFisier + ".out");
typedef unsigned long long int ull;
typedef  long long int ll;
int main(){
	const double  pi =M_PI;
	double  a, b, c;
	cin >> a >> b >> c;
    if (a + b > c && a + c > b && c + b > a){
		double  A, B, C;
		A = (b * b + c * c - a * a) / (2.f * b * c);
		B = (a * a + c * c - b * b) / (2.f * a * c);
		C = (a * a + b * b - c * c) / (2.f * a * b);
        cout << fixed << setprecision(2);
		cout << ((int)(acos(B) / pi * 180.0 * 100)) / 100.0 << ' ';
		cout << ((int)(acos(C) / pi * 180.0 * 100)) / 100.0 << ' ';
		cout << ((int)(acos(A) / pi * 180.0 * 100)) / 100.0 << ' ';
	}
	else
		cout << "Imposibil";
}	
