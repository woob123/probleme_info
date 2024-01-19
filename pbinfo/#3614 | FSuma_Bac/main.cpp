int suma(int a, int b){
    int sum = 0;
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    int d=a;
    for(int i=1;i<=d;i++){
        if(d%i==0)
            sum += i;
    }
    return sum;
}
