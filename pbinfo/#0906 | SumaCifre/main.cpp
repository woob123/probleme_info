void sumcif(int n, int& p, int& imp){
    imp = 0, p = 0;
    while(n){
        if((n%10)%2==0)
            p += n%10;
        else
            imp += n%10;
        n/=10;
    }
}
