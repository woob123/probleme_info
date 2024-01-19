int sum_cifra_control(int a, int b){
    int s, i, c=0, p, j;
    for(i=a; i<=b; i++){
        j = i;
        j = j % 9;
        if (j == 0)
            j = 9;
        if(j==a)
            c++;
    }
    return c;
}
