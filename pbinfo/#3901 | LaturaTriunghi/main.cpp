#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

int main(){
   long double a, b, acb, raspuns;
   cin >> a >> b >> acb;

   raspuns = sqrt(a*a + b*b - 2*a*b*cos(acb/180*PI));
   
   raspuns *= 100;
   cout << (int)(raspuns)/100 << '.' << (int)(raspuns)/10%10 << (int)(raspuns)%10;
   raspuns /= 100;
   return 0;
}
