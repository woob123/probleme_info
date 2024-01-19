int sumfactcif(int n){
    if(n==0)
        return 1;
    int i, s=0, cif, p;
    while(n){
        cif = n%10;
        p = 1;
        if(cif!=0)
            for(i=1; i<=cif; i++)
                p *= i;
        n /= 10;
        s += p;
    }
    return s;
}
