void cifminmax(long long n, int& max, int& min){
    min = 10, max = -1;
    if(n == 0)
        min = max = n;
    while(n){
        if(n%10 > max)
            max = n%10;
        if(n%10 < min)
            min = n%10;
        n/=10;
    }
}
