bool TreiCifImp(int n){
   int count = 0;
   while (n){
      if (n%2){
         count++;
         if (count >= 3)
            return true;
      }
      else
         count = 0;
      n /= 10;
   }
   return false;
}
