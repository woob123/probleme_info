int cifreImpare(int n){
    int nr = 0;
    int imp = 0;
    int p = 1;
    while(n){
        if((n%10)%2==0){
            nr = nr + p*(n%10);
            p*=10;
        }
        else
            imp++;
        n/=10;
    }
    if(imp == 0 || nr == 0)
        return -1;
    return nr;
}
