#include <iostream>
using namespace std;

int ogl(int x){
   int og = 0;
   while (x){
      og = og*10 + x%10;
      x /= 10;
   }

   return og;
}
int cmmdc(int a, int b){
   int r = a % b;
   while (r != 0){
      a = b;
      b = r;
      r = a % b;
   }

   return b;
}
int main(){
   int a, b, S;

   S = 0;
   while ((cin >> a >> b) && (a != 0))
      if (cmmdc(a, b) == 1 && cmmdc(ogl(a), ogl(b)) == 1)
         S += a+b;

   cout << S;

   return 0;
}
