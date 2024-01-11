#include <iostream>
using namespace std;
int sum_cif(int n){
    int s = 0;
    while(n){
        s += n%10;
        n /= 10;
    }
    return s;
}
int main(){
    int n;
    cin  >> n;
    int maxi = 0, mini = 100;
    int nrmaxi = 0, nrmini = 0;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(sum_cif(x) > maxi)
            maxi = sum_cif(x), nrmaxi = x;
        if(sum_cif(x) < mini)
            mini = sum_cif(x), nrmini = x;
    }
    cout << nrmini << endl << nrmaxi;
}
