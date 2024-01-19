int suma(int v[], int n, int i, int j){
    int s = 0;
    for(int k = 1; k <= n; k++){
        if(k < i || k > j)
            s+= v[k];
    }
    return s;
}
