int fact(int n){
    if(n == 1 || n == 0)
        return 1;
    else{
        int nr = 1;
        for(int i = 2; i <= n; i++)
            nr *= i;
        return nr;
    }
}
