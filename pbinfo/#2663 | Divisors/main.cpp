int NrDiv(int n){
   if (n == 0)  return 0;
   if (n == 1)  return 1;
   int d, div = 2;
   for (d = 2; d*d < n; ++d)
      if (n % d == 0)
         div += 2;
   if (d*d == n)
      div += 1;
   return div;
}

int NextNrDiv(int n){
   int i;
   int nr_div_n = NrDiv(n);
   for (i = n+1; NrDiv(i) != nr_div_n; ++i);
   return i;
}
int PrevNrDiv(int n){
   int i;
   int nr_div_n = NrDiv(n);
   for (i = n-1; i >= 0 && NrDiv(i) != nr_div_n; --i);
   return i;
}
