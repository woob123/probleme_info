int interval(int a[], int n){
    int cnt = 0;
    if(a[0] > a[n-1])
        swap(a[0], a[n-1]);
    for(int i = 0; i < n; i++)
        if(a[i] >= a[0] && a[i] <= a[n-1])
            cnt++;
    return cnt;
}
