#include <iostream>
using namespace std;

long long s = 0, s1 = 0;
int n , k , d = 0;
int main(){
    cin>>n;
    for(int x = 1 ; x <= n ; x++){
        cin>>k;
        for(int j = 1 ; j * j <= k ; j++)
            if(k % j == 0){
                d++;
                if(k / j > j)
                d++;
            }
        if(d == 2){
            while(k)
            {
                s = s + k % 10;
                k = k / 10;
            }
            s1 = s1 + s;
        }
        s = 0;
        d = 0;
    }
    cout<<s1;
}
