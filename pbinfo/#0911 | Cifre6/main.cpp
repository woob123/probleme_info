void numar(long int n, int k, int& x){
    short int cif[10]={0};
    while(n) cif[n%10] += 1, n /= 10;
    int kcr = 0;
    x = 0;
    for(int i=9; i>=0 && kcr<k; i--)
        if(cif[i])
            for(int j=1; j<=cif[i] && kcr<k; j++)
                x = x*10 + i, kcr += 1;
}
