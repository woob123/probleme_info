bool a_prim(int n){
   int d, i;
   bool prim;
   for (d = 2; d*d < n; ++d)
      if (n % d == 0){
           prim = true;
      for (i = 2; i*i <= d; ++i)
          if (d % i == 0)
            prim = false;
          if (prim){
            for (i = 2; i*i <= n/d; ++i)
               if (n/d % i == 0)
                  prim = false;
            if (prim)
               return true;
         }
      }
   return false;
}
