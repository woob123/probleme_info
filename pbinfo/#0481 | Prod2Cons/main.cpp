#include <iostream>
#include <cmath>
using namespace std;
int main(){
   long long int x;
   cin>>x;
   long int nr1 = sqrt(x), nr2 = nr1+1;
   if (1LL*nr1*nr2==x)
      cout<<nr1<<' '<<nr2;
   else
      cout<<"NU EXISTA";
   return 0;
}
