int maxi1[90], maxi2[90];
int scif(int x){
    int s;
    s = 0;
    while (x > 0){
        s += x % 10;
        x /= 10;
    }
    return s;
}
int DouaNumere(int a[], int n){
    int i, s, maxim;
    for (i = 0; i < n; i++){
        s = scif(a[i]);
        if (maxi1[s] <= a[i]){
            maxi2[s] = maxi1[s];
            maxi1[s] = a[i];
        }
        else if (maxi2[s] < a[i])
            maxi2[s] = a[i];
    }
    maxim = -1;
    for (i = 1; i <= 87; i++)
        if (maxi1[i] != 0 && maxi2[i] != 0){
            s = maxi1[i] + maxi2[i];
            maxim = 1;
        }
    return maxim;
}
