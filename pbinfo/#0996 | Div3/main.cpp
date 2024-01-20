#include <fstream>
using namespace std;
ifstream cin("div3.in");
ofstream cout("div3.out");
long long suma_cifre(int n){
   long long s = 0;
   while(n){
      s += n%10;
      n/=10;
   }
   return s;
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
      int x;
      cin >> x;
      if(suma_cifre(x)%3==0)
         cout << x << " ";
    }
}
