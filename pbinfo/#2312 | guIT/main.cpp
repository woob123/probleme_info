#include <iostream>

using namespace std;
long long i,n,suma ;

int main(){
    cin >> n ;
    suma = 0 ;
    i = 2 ;
    while ( n%i != 0 ) i++ ;
    n = n / i ;
    suma = suma + i ;
    i = 2 ;
    while ( n%i != 0 ) i++ ;
    n = n / i ;
    suma = suma + i + n ;
    cout << suma ;
    return 0;
}
