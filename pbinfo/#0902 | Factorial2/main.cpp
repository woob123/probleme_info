int det(int n){
   int factorial = 1;
   for (int i = 2; ; ++i){
      factorial *= i;
      if (factorial > n){
         if (n - factorial/i <= factorial - n)
            return factorial/i;
         else
            return factorial;
      }
   }
}
