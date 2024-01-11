#include <iostream>
using namespace std;
struct sala{
    int nrLocuri;
    int pret;
}t[15];
int main(){
    int s = 0;
    for(int i = 0; i < 15; i++)
        s += t[i].nrLocuri * t[i].pret;

    cout << s;
}
