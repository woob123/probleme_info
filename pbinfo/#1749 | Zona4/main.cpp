#include <iostream>
using namespace std;

int main()
{
   int n, zona, i, j, sum = 0;
   cin >> n >> zona;

   int a[n][n];
   for (i = 0; i < n; ++i)
      for (j = 0; j < n; ++j)
         cin >> a[i][j];

   for (i = 0; i < n; ++i)
      for (j = 0; j < n; ++j)
         if ((zona == 1 && i < j && i+j < n-1) ||
               (zona == 2 && i+j >= n && i < j) ||
               (zona == 3 && i > j && i+j >= n) ||
               (zona == 4 && i > j && i+j < n-1))
            sum += a[i][j];


   cout << sum;
   return 0;
}
