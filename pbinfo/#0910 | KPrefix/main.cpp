void prefix(int n, int k, int& pref){
    int cn = n;
    int cf = 0;
    while(cn){
        cf++;
        cn/=10;
    }
    int m = cf-k;
    while(m){
        n/=10;
        m--;
    }
    pref = n;
}
