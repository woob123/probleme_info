void dublare1(int &n){
   int p = 1;
   while (p*10 <= n)
      p *= 10;
   n += n/p*p * 10;
}
