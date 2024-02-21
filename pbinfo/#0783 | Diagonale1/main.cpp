#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[101][101];
  long long sum = 0;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++){
      cin >> a[i][j];
      if(i-j == 1 || j-i == 1)
        sum += a[i][j];
  }
  cout << sum;
}
