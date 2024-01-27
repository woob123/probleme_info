#include <fstream>
using namespace std;
ifstream cin ("interclasare.in");
ofstream cout ("interclasare.out");
int main(){
   int n, m, i, j;
   cin >> n;
   int vin[n];
   for (i=0; i<n; i++)
      cin >> vin[i];
   cin >> m;
   int vim[m];
   for (i=0; i<m; i++)
      cin >> vim[i];
   int c[n+m], var = 0;

   i = 0;   j = 0;
   while (i != n and j != m)
      if (vin[i] < vim[j])
         c[var++] = vin[i++];
      else
         c[var++] = vim[j++];
   while (i != n)
      c[var++] = vin[i++];
   while (j != m)
      c[var++] = vim[j++];
   for (i=0; i<var; i+=10)
   {
      for (j=i; j<i+10 and j<var; j++)
         cout << c[j] << ' ';
      cout << '\n';
   }
   return 0;
}
