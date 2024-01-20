#include <iostream>
#include <iomanip>
using namespace std;
double a, b, c, d;
double f(double x){
   return (a*x + b);
}
double g(double x){
   return (c*x + d);
}
int main(){
   cin >> a >> b >> c >> d;
   if (a == c){
      if (b == d)
         cout << "Grafice echivalente";
      else
         cout << "Grafice paralele";
   }
   else{
      double x = (d-b) / (a-c);
      double y = f(x);
      cout << fixed << setprecision(2) << x << ' ' << y;
   }

   return 0;
}
