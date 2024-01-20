bool prim(int n){
    return n==2 || n == 3 || n == 5 || n==7;
}
int NrPrime(int n){
    int cnt=0;
    while(n){
        if(prim(n%10))
            cnt++;
        n/=10;
    }
    return cnt;
}
