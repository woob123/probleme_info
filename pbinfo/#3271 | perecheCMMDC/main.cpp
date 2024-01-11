#include <iostream>
using namespace std;
int cmmdc(int a, int b){
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    int a, b;
    int maxi = 0;
    int summaxi = 0;
    int amax = 0, bmax = 0;
    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        if(cmmdc(a, b) > maxi)
            maxi = cmmdc(a, b), amax = a, bmax = b;
        else if(cmmdc(a, b) == maxi)
            if(a+b > summaxi)
                summaxi = a+b, maxi = cmmdc(a,b), amax = a, bmax = b;
    }
    cout << amax << " " << bmax;
}
