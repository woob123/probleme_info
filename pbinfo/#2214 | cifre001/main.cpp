#include <iostream>
using namespace std;
int nr_cif(int n){
    int cnt = 0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}
int poz(int a, int b){
    int cnt = 0;
    while(a != 0 && b != 0){
        if(a % 10 == b % 10)
            cnt++;
        a/=10, b/=10;
    }
    return cnt;
}
int main(){
    int a, b;
    cin >> a >> b;
    if(nr_cif(a) != nr_cif(b))
        cout << "NU";
    else{
        cout << "DA" << endl;
        cout << poz(a, b);
    }
}
