int count(double a[], int n){
    double s = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++)
        s += a[i];
    s = double(s)/n;
    for(int i = 0; i < n; i++)
        if(a[i] >= s)
            cnt++;
    return cnt;
}
