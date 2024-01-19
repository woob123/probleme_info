bool patrat(int n){
    int r = sqrt(n);
    if(r*r == n)
        return true;
    else
        return false;
}
int multiplu(int n){
    for(int i = n; ; i += n){
        if(patrat(i))
            return i;
    }
}
