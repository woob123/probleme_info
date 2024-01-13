#include <iostream>
using namespace std;
int ciur[1000000];
void generare(int n){
    ciur[0] = 1;
    ciur[1] = 1;
    for(int i = 2; i*i <= n; i++){
        if(ciur[i] == 0)
            for(int j = 2; j <= n/i; j++)
                ciur[i*j] = 1;
    }
}
int main(){
    int n;
    cin >> n;
    generare(n);
    for(int i = 1; i <= n; i++)
        if(ciur[i] == 0)
            cout << i << " ";
}
