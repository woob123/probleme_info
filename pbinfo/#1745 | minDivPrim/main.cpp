int desc_and_rebuild(int n){
    int d = 2;
    int p;
    int newnr = 1;
    while(n > 1){
        p = 0;
        while(n%d == 0){
            p++;
            n/=d;
        }
        if(p){
            newnr *= d;
        }
        d++;
        if(d*d > n && n > 1)
            d = n;
    }
    return newnr;
}
