bool prim(int n){
    if(n == 1 || n == 0) return 0;
    if(n == 2) return 1;
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
    if(n == 3){
        a = 2;
        b = 5;
    }
    else{
        int i = n;
        while(a == 0 && i > 0){
            if(prim(i))
                a = i;
            i--;
        }
        i = n;
        while(b == 0){
            if(prim(i))
                b = i;
            i++;
        }
    }
}
