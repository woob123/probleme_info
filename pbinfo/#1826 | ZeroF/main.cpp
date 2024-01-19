int zerof(int n){
    int d5 = 0;
    for(int i = 1 ; i <= n ; ++i){
        int m  = i;
        while(m % 5 == 0){
            m = m / 5;
            d5++;
        }
    }
    return d5;
}
