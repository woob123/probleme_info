int nrmaxim(int n){
    int max = -1;
    int nr = 0,aux=n;
    while (aux) {
        aux = aux / 10;
        nr++;
    }
    int nr1 = nr - 1;
    int rest = 1;
    while (nr1--){
        rest = 10 * rest;
    }
    while (nr--){
        n = (n % rest) * 10 + n / rest;
        if (n > max)
            max = n;
    }
    return max;
}
