#include <iostream>

using namespace std;
void inserare(int &n){
  int k=0,p=1;
  k=p*(n%10)+k,p*=10;
  while(n>9){
    int c=n%10-(n/10)%10;
      if(c<0)
        c=-c;
      k=p*c+k,p*=10;
      k=p*((n/10)%10)+k;
      p*=10;
      n/=10;
    }
  n=k;
}
