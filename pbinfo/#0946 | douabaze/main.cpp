#include <iostream>
using namespace std;
int nr_2[100];
long long convert2_10(int v[], int n){
    long long rez = 0;
    int i = 1;
    for(int i = n-1; i >= 0; i--){
        rez += i * v[i];
        i *= 2;
    }
    return rez;
}
void convert10_4(int n){
    int k = 0;
    int v[100];
    while(n){
        v[k++] = n%4;
        n/=4;
    }
    for(int i = k-1; i >= 0; i--)
        cout << v[i];
}
int main(){
    int k = 0;
    int x;
    while(cin >> x){
        nr_2[k++] = x;
    }

    int nr_10 = convert2_10(nr_2, k);
    convert10_4(nr_10);
}
