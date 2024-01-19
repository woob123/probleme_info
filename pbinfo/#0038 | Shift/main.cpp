int shift(int x[], int n){
    int p = x[0];
    for(int i = 1; i < n; i++)
        x[i-1] = x[i];
    x[n-1] = p;
}
