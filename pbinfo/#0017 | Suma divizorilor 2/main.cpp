void sum_div(int n, int&sum){
    sum = n+1;
    for(int i = 2; i<= n/2; i++){
        if(n%i==0)
            sum += i;
    }
}
