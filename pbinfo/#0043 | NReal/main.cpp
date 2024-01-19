double nreal(int x, int y){
    double rezultat = x;
    int copieY = y, putere = 1;
    while(copieY != 0){
        putere *= 10;
        copieY /= 10;
    }
    rezultat += (double) y / putere;
    return rezultat;
}
