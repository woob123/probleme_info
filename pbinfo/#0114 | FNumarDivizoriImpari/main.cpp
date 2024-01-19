int nr_div_imp(int nr, int &rez){
    rez = 0;
    int d;
    for(d = 1; d * d < nr; d += 1){
        if(nr % d == 0) {
            if(d % 2 == 1)
                rez += 1;
            if(nr / d % 2 == 1)
                rez += 1;
        }
    }   
    if(d * d == nr && d % 2 == 1)
        rez += 1;
}
