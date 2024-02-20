#include <iostream>
#include <cmath>
using namespace std;
long long n, m;
int main(){
   cin >> n >> m;
   if (m == 0)
      cout << n << ' ' << n;
   else
      cout << max(0LL, n - m*2) << ' ' << n - ceil((1 + sqrt(1+8*m)) / 2);
}
