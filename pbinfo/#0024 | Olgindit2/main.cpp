int oglindit(int n){
    int ogl = 0;
    while(n){
        ogl = ogl*10 + n%10;
        n/=10;
    }
    return ogl;
}
