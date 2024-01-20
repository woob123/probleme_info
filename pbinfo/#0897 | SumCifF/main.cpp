int sumcif(int a ){
    int sumcif = 0;
    while(a != 0){
        sumcif = sumcif + a % 10;
        a=a/10;
    }
    return sumcif;
}
