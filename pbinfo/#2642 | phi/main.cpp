int Phi(int n){
   int i, raspuns;
   raspuns = n;
   for (i = 2; n != 1 and i*i <= n; ++i)
      if (n % i == 0){
         raspuns = raspuns / i * (i-1);
         while (n % i == 0)
            n /= i;
      }
   if (n != 1)
      raspuns = raspuns / n * (n-1);
   return raspuns;
}
