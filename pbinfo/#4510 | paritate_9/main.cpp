#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int s = 0;
    int p = 1;
    if(n%2 != m%2){
        while(n){
            p = p*(n%10);
            n/=10;
        }
        while(m){
            p = p*(m%10);
            m/=10;
        }
        cout << p;
    }
    else{
        while(n){
            s = s+(n%10);
            n/=10;
        }
        while(m){
            s = s+(m%10);
            m/=10;
        }
        cout << s;
    }
}
