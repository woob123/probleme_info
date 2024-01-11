#include <iostream>
using namespace std;
int i = 0;
void afisvec(int v[], int n){
    cout << v[i] << " ";
    if(n > 1){
        i++;
        afisvec(v, n-1);
    }
}
int main(){
    int n = 5;
    int v[10] = {3, 6, 5, 4, 2};
    afisvec(v, n);
}
