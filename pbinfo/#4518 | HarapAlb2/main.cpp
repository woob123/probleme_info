#include <iostream>
using namespace std;
int main(){
    int n, r;
    cin >> n >> r;
    if(r == 1){
        if((n%10) >= 5){
            for(int i = n; ; i++){
                if(i%10 == 0){
                    cout << i;
                    return 0;
                }
            }
        }
        else{
            for(int i = n; ; i--){
                if(i%10 == 0){
                    cout << i;
                    return 0;
                }
            }
        }
    }
    else{
        n/=10;
        if((n%10) >= 5){
            for(int i = n; ; i++){
                if(i%10 == 0){
                    cout << i*10;
                    return 0;
                }
            }
        }
        else{
            for(int i = n; ; i--){
                if(i%10 == 0){
                    cout << i*10;
                    return 0;
                }
            }
        }
    }
}
