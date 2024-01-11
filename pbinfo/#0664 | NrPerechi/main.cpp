#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n , nrn;
    cin >> nrn;
    for(int i = 1;i <= nrn ; i++){
        cin >> n;
        long long int cnt = 1;
        int d = 2;
        while(n > 1){
            int  p = 0;
            while( n % d == 0)
                p++, n /= d;
            if(p > 0)
                cnt *= (2 * p + 1);
            d ++;
            if(n > 1 && d * d > n)
                d = n;
        }
        cout << cnt << " ";
    }
    return 0;
}
