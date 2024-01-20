int echilibrat(int n){
    int sumi = 0, sump = 0;
    int v[10];
    int k = 0;
    while(n){
        v[k]=n%10;
        k++;
        n/=10;
    }
    k--;
    for(int i = 0; i <= k; i+=2)
        sump += v[i];
    for(int i = 1; i <= k; i+=2)
        sumi += v[i];
    return sumi%2==1 && sump%2==0;
}
