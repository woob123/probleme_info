#include <iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   int a[n*2+1][n*2+1], i, j;
   for (i = 0; i <= n; ++i)
      for (j = i; j <= n; ++j)
         a[i][j] = a[i][n*2+1-j-1] = a[j][i] = a[n*2+1-j-1][i] = a[n*2+1-i-1][j] = a[n*2+1-i-1][n*2+1-j-1]
                 = a[j][n*2+1-i-1] = a[n*2+1-j-1][n*2+1-i-1] = n-i;
   for (i = 0; i < 2*n+1; ++i){
      for (j = 0; j < 2*n+1; ++j)
         cout << a[i][j] << ' ';
      cout << '\n';
   }
   return 0;
}
