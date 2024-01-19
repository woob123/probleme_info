void ordon123(int n, int a[]){
    int ones = 0, twos = 0, threes = 0, i;
    for (i = 0; i < n; i++)
        switch(a[i]){
            case 1: ones++; break;
            case 2: twos++; break;
            case 3: threes++;
        }
    i = 0;
    while(ones--)
        a[i++] = 1;
    while(twos--)
        a[i++] = 2;
    while(threes--)
        a[i++] = 3;
}
