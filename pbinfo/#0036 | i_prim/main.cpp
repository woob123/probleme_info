int i_prim(int n){
   int i, d, p1, p2;
   bool GASIT;
   GASIT = false;
   for (i = n; GASIT == false; --i){
      GASIT = true;
      for (d = 2; d*d <= i; ++d)
         if (i % d == 0)
            GASIT = false;
   }
   p1 = i + 1;
   GASIT = false;
   for (i = n; GASIT == false; ++i){
      GASIT = true;
      for (d = 2; d*d <= i; ++d)
         if (i % d == 0)
            GASIT = false;
   }
   p2 = i - 1;
   return p2 - p1;
}
