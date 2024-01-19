#include <fstream>
#include <cstring>
using namespace std;
ifstream fin ("capslock.in");
ofstream fout ("capslock.out");
int main(){
   char s[256], rez[256] = {'\0'};
   char ch[2] = {'\0', '\0'};
   int i;
   bool caps = false;
   fin.getline(s, 256);
   for (i = 0; s[i]; ++i){
      if (s[i] == '#')
         caps = !caps;
      else{
         if (caps)
            ch[0] = toupper(s[i]);
         else
            ch[0] = s[i];
         strcat(rez, ch);
      }
   }
   fout << rez;
   fin.close();
   fout.close();
   return 0;
}
