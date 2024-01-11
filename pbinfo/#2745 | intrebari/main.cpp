#include <iostream>
using namespace std;

long long sumaVector(int *v, int size){
   long long sum = 0;
   for (int i = 0; i < size; ++i)
      sum += v[i];

   return sum;
}
int main(){
   int n, t, p;
   cin >> n >> t >> p;
   int v[n], i;
   for (i = 0; i < n; ++i)
      cin >> v[i];

   if (t == 1){
      int min = v[0], sum_cif = 0;
      for (i = 1; i < p; ++i)
         if (v[i] < min)
            min = v[i];

      while (min != 0){
         sum_cif += min % 10;
         min /= 10;
      }

      cout << sum_cif << '\n';
   }
   else{
      int max = v[0], nr_div = 1;
      int d;
      for (i = 1; i < p; ++i)
         if (v[i] > max)
            max = v[i];

      if (max != 1)
         nr_div += 1;

      for (d = 2; d*d < max; ++d)
         if (max % d == 0)
            nr_div += 2;
      if (d*d == max)
         nr_div += 1;

      cout << nr_div << '\n';
   }


   cout << sumaVector(v, n);
   return 0;
}
