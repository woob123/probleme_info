#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ca = a, cb = b;
    int nr_imp = 0, nr_par = 0;
    while(a){
        int cf = a%10;
        if(cf%2 == 0)
            nr_par++;
        else
            nr_imp++;
        a/=10;
    } 
    while(b){
        int cf = b%10;
        if(cf%2 == 0)
            nr_par++;
        else
            nr_imp++;
        b/=10;
    }
    if(ca%2 != cb%2){
        cout << nr_imp;
    }
    else{
        cout << nr_par;
    }
}
