void sterge(int v[], int &n, int i, int j){
    for(int a = i, b = j + 1; b <= n; a++, b++){
        v[a] = v[b];
    }
    n = n - j + i - 1;
}
