#include <iostream>
using namespace std;

int aparitii[1000001];

int main(){
   int n, m, i, j;
   cin >> n >> m;
   int a[n][m], elem;
   for (i = 0; i < n; ++i)
      for (j = 0; j < m; ++j)
         cin >> a[i][j];
   for (i = 0; i < n; ++i)
      for (j = 0; j < m; ++j)
      {
         elem = a[i][j];
         aparitii[elem] ++;
      }
   int max_aparitii = 0;
   int max_nr;
   for (i = 0; i < 1000001; ++i)
      if (aparitii[i] > max_aparitii)
      {
         max_aparitii = aparitii[i];
         max_nr = i;
      }
      else if (aparitii[i] == max_aparitii)
         if (i > max_nr)
            max_nr = i;


   cout << max_nr;
   return 0;
}
