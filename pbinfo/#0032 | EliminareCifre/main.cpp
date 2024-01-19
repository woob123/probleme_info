void P(int &n, int c){
   long long p = 1;
   while (p <= n){
      if (n/p % 10 == c)
         n = n/p/10 * p  + n%p;
      else
         p *= 10;
   }
}
