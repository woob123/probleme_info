#include <iostream>
using namespace std;

int phi(int n){
   int val = n;
   for (int d = 2; d*d <= n; ++d){
      if (n % d == 0)
         val = val / d * (d-1);
      while (n % d == 0)
         n /= d;
   }
   if (n != 1)
      val = val / n * (n-1);

   return val;
}

int main(){
   int n;
   cin >> n;
   cout << phi(n);
}
