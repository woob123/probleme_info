void FRadical(int n, int &x, int &y){
    int m;
    x = sqrt(n);
    m = x * x;
    if(m == n){
        y = 1;
    } else {
        while(n % m != 0){
            --x;
            m = x * x;
            if(n % m == 0){
                y = n / m;
            }
        }
    }
}
