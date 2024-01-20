#include <fstream>
using namespace std;
ifstream cin("prime.in");
ofstream cout("prime.out");
bool prim(int n){
   int cnt = 0;
   for(int d = 1; d*d <= n; d++){
      if(n%d==0){
         cnt++;
         if(d*d < n)
            cnt++;
      }
   }
   return cnt == 2;
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
      int x;
      cin >> x;
      if(prim(x))
         cout << x << " ";
    }
}
