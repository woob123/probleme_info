int nz(int n){
    int p = 5, s = 0;
    while(p <= n)
        s += n/p, p *= 5;
    return s;
}
