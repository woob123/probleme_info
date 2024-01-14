// problema: #2096 | XYZ
// limita de timp: 0.1s
// limita de memorie: 2MB/1MB
// i/o: xyz.in/xyz.out
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("xyz.in");
ofstream g("xyz.out");

int main(){
    int x, y, z;
    f >> x >> y >> z;
    //declaram rezultatul si il initializam cu y,
    //astfel avand prima cifra a nr "xyz"
    long long rez = y;
    //deorece deja avem prima cifra, numarul de cifre de z
    //va fi egal cu x-1, la fiecare pas mai adaugam o cifra z
    for (int i = 1; i < x; i++){
        rez = rez*10 + z;
    }
    g << rez;
}
