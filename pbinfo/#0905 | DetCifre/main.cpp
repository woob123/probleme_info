void detcifre(int n, int& p, int& u){
    u = n%10;
    while(n > 9)
        n/=10;
    p = n;
}
