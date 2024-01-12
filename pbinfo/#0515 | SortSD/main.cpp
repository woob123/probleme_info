#include <iostream>
using namespace std;

int main()
{
   int n, d;
   cin >> n;
   int nr[n], sumdiv[n], i;

   for (i = 0; i < n; ++i)
   {
      cin >> nr[i];
      sumdiv[i] = 0;
      if (nr[i] == 1)
         sumdiv[i] = 1;
      else if (nr[i] > 1)
      {
         sumdiv[i] = 1 + nr[i];
         for (d = 2; d*d < nr[i]; ++d)
            if (nr[i] % d == 0)
               sumdiv[i] += d + nr[i]/d;
         if (d*d == nr[i])
            sumdiv[i] += d;
      }
   }

   {
      bool sortat;
      do
      {
         sortat = true;
         for (i = 1; i < n; ++i)
            if (sumdiv[i - 1] == sumdiv[i])
            {
               if (nr[i - 1] > nr[i])
                  swap(nr[i - 1], nr[i]),
                  sortat = false;
            }
            else if (sumdiv[i - 1] > sumdiv[i])
               swap(sumdiv[i - 1], sumdiv[i]),
               swap(nr[i - 1], nr[i]),
               sortat = false;
      } while ( !sortat );
   }


   for (i = 0; i < n; ++i)
      cout << nr[i] << ' ';
   return 0;
}
