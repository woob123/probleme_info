#include <iostream>
using namespace std;
void afisvec(int v[], int n){
    cout << v[n-1] << " ";
    if(n > 1)
        afisvec(v, n-1);
}
int main(){
    int n = 5;
    int v[10] = {3, 6, 5, 4, 2};
    afisvec(v, n);
}
