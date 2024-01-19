bool Egal(int n){
    int i = -1;
    bool ok = true;
    while(n){
        int x = n % 10;
        if(x % 2 == 1)
            if(i == -1)
                i = x;
            else if(x != i)
                ok = false;
        n/=10;
    }
    return ok;
}
