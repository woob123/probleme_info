void P(int x[], int n, int& mini, int& maxi, int& sum){
    mini = x[0];
    maxi = x[0];
    sum = x[0];
    for(int i = 1; i < n; i++){
        sum += x[i];
        if(x[i] < mini)
            mini = x[i];
        if(x[i] > maxi)
            maxi = x[i];
    }
}
