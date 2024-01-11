#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int cntpar = 0, cntimp = 0;
    for(int i = 1; i <= x; i++){
        int n;
        cin >> n;
        if(n == 0)
            cntpar++;
        while(n){
            if((n%10)%2==0)
                cntpar++;
            else if((n%10)%2==1)
                cntimp++;

            n/=10;
        }
    }
    cout << cntpar << " " << cntimp;
}
