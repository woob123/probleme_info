int norocoase(int a, int b){
   if (b % 2 == 0)
      b--;
   if (b % 2 == 0)
      a++;
   return (b/2 - a/2 + 1);
}
