bool prim(int n){
    int d = 2, cnt = 1;
    while(n > 1){
        int p = 0;
        while(n%d == 0)
            n/=d, p++;
        cnt *= (p+1);
        d++;
        if(d*d > n)
            d = n;
        }
    return cnt == 2;
}
int nr_prim(int n){
    for(int i = n+1; ; i++)
        if(prim(i))
            return i;
}
