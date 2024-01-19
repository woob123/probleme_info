#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double a, b, c, d, A;
   cin >> a >> b >> c >> d;

   if ((abs(d-b) < abs(c-a) && abs(c-a) < abs(d+b))  ==  false){
      cout << "Imposibil";
   }
   else{
      A = (a+c) * sqrt(b*b - ((c-a)*(c-a) + b*b - d*d)*((c-a)*(c-a) + b*b - d*d) / 4/(c-a)/(c-a)) / 2;
      A *= 100;

      cout << int(A)/100 << '.' << int(A)/10%10 << int(A)%10;
   }
}
