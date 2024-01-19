int cmmnr(int n){
    int i, j, nr = 0, cif;
    int v[11]={0};
    while (n){
          cif = n % 10;
          v[cif] = v[cif] + 1;
          n = n / 10;
    }
    if (v[0] > 0)
        for (i = 1; i <= 9; i ++)
            if (v[i] > 0){
                nr = nr * 10 + i;
                v[i] = v[i] - 1;
                break;
            }
    for(i = 0; i <= 9; i ++)
        for (j = 1; j <= v[i]; j++)
            nr = nr * 10 + i;
    return nr;
}
