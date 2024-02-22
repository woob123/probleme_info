#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[21][21];
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      cin >> a[i][j];
      
  int sprin = 0, ssecun = 0;
  for(int i = 1; i <= n; i++)
    sprin += a[i][i];
    
  for(int i = 1; i <= n; i++)
    ssecun += a[i][n-i+1];
    
  cout << abs(sprin - ssecun);
}
