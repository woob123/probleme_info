long int concat(long int a, long int b){
    long int cb = b;
    while(cb)
        a *= 10, cb /= 10;
    return a+b;
}
