#include <iostream>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   int suma = 0,o,cevaNuStiu;
   for (int i=0; suma<a; i++){
      suma = 0;
      cevaNuStiu = i+b;
      for (o=i;o<cevaNuStiu;o++)
         suma += o;
   }
   if (suma==a)
      cout<<"DA";
   else
      cout<<"NU";
   return 0;
}
