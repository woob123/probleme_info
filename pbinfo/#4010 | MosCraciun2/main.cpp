#include <iostream>
#include <algorithm>

struct Magazin {
   int pret, cadouri;

   inline bool operator() (const Magazin& a, const Magazin& b)
   {
      return (a.pret <= b.pret);
   }
};

int main()
{
   int kcopii, kmag;
   int pret, cadouri;
   std::cin >> kcopii >> kmag;
   Magazin mag[kmag];  int i;

   for (i = 0; i < kmag; ++i)
      std::cin >> mag[i].pret >> mag[i].cadouri;

   std::sort(mag, mag+kmag, Magazin());

   pret = 0;
   cadouri = 0;
   for (i = 0; (i < kmag) && (cadouri + 1 <= kcopii); ++i)
   {
      while ((mag[i].cadouri > 0) && (cadouri + 1 <= kcopii))
      {
         pret += mag[i].pret;
         mag[i].cadouri --;
         cadouri ++;
      }
   }

   if (cadouri != kcopii)
      std::cout << "imposibil";
   else
      std::cout << pret;

   return 0;
}
