void sum_div_prim(int nr, int &S){
    S = 0;
    int d = 2;
    while(nr > 1){
        if(nr % d == 0){   
            S += d;         
            while(nr % d == 0){    
                nr /= d;            
            }
        }
        d += 1; 
        if(nr > 1 && d*d > nr ){   
            d = nr; 
        }
    }
}
