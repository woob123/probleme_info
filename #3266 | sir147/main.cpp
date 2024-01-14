#include <fstream>
using namespace std;
ifstream fin ("sir147.in");
ofstream fout ("sir147.out");
int main(){
   int x;
   while (fin >> x)
      if (x % 3 == 1)
         fout << x << ' ';
   fin.close();
   fout.close();
   return 0;
}
