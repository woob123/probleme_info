int fact(int n){
    int p = 1;
    for(int i = 2; i <= n; i++)
        p *= i;
    return p;
}
void interval(int n, int&a, int&b){
    a = fact(n-1)+1;
    b = fact(n+1)-1;
}
