#include <iostream>
using namespace std;

int an[3] = {9999}, luna[3] = {9999}, zi[3] = {9999}, ordine[2], i;

void MutaMin(){
   an[0] = an[1];
   luna[0] = luna[1];
   zi[0] = zi[1];
   ordine[0] = i;
}
void MutaMax(){
   an[2] = an[1];
   luna[2] = luna[1];
   zi[2] = zi[1];
   ordine[1] = i;
}

int main(){

   int n;
   cin >> n;
   for (i = 1; i <= n; ++i){
      cin >> an[1] >> luna[1] >> zi[1];
      if (an[1] < an[0])
         MutaMin();
      else if (an[1] == an[0]){
         if (luna[1] < luna[0])
            MutaMin();
         else if (luna[1] == luna[0])   if (zi[1] < zi[0])
               MutaMin();
         }
      }
      else if (an[1]>an[2]||(an[1]==an[2]&&(luna[1]>luna[2]||(luna[1]==luna[2]&&zi[1]>zi[2]))))
         MutaMax();
   }
   cout << ordine[1] << ' ' << ordine[0];
   return 0;
}
