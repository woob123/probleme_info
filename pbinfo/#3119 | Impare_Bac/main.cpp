void Impare(int &n){
   long long p = 1;
   while (p <= n){
      if (n/p % 10 % 2 == 1)
         n -= p;

      p *= 10;
   }
}
