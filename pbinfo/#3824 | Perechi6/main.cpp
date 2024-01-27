#include <bits/stdc++.h>
using namespace std;
ifstream fin ("perechi6.in");
ofstream fout ("perechi6.out");
const int nMAX = 100e3;
const int mMAX = 100e3;
int n, m;
int a[nMAX + 1];
int b[mMAX + 1];
int main(){
   fin >> n;
   for (int i = 1; i <= n; ++i)
      fin >> a[i];
   fin >> m;
   for (int i = 1; i <= m; ++i)
      fin >> b[i];
   
   long long perechi = 0;

   int i = 1, j = 1;
   while (i <= n && j <= m){
      if (a[i] == b[j]){
         int c1 = 0, c2 = 0, sav = a[i];
         while (i <= n && a[i] == sav)
            c1++, i++;
         while (j <= m && b[j] == sav)
            c2++, j++;
         perechi += 1ll * c1 * c2;
      }
      else if (a[i] < b[j])
         i++;
      else
         j++;
   }
   while (i <= n)
      i++;
   while (j <= m)
      j++;
   fout << perechi;
}
