void perm(int &n){
   long long p = 1;
   while (p * 10 < n)
      p *= 10;

   n = (n % p) * 10 + (n / p);
}
