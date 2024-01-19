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

void sub(int n, int&a, int&b){
    a = 0, b = 0;
    for(int i = n - 1; i > 0; i--){
        if(prim(i) && a == 0)
            a = i;
        else if(prim(i))
            b = i;
        if(a!=0 && b!=0)
            return;
    }
}
