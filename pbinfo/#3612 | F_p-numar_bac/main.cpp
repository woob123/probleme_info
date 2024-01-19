int kpn(int a, int b, int k){
   int p_numere = 0;
   int i, d;
   if (a == 1){
      p_numere += 1;
      i = a + 1;
   }
   else
      i = a;
   bool par, GATA = false;
   for (; i <= b and !GATA; ++i){
      if (i % 2 == 0)
         par = false;
      else
         par = true;
      for (d = 2; d*d < i; ++d)
         if (i % d == 0){
            if (d % 2 == 1)
               par = !par;
            if (i/d % 2 == 1)
               par = !par;
         }
      if (d*d == i)
         if (d % 2 == 1)
            par = !par;
      if ((i % 2 == 0) == par){
         p_numere += 1;
         if (p_numere == k)
            GATA = true;
      }
   }
   if (GATA)
      return i-1;
    return -1;
}
