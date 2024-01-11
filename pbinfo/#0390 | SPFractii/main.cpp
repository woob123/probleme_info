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
int cmmmc(int a, int b){
    return a/cmmdc(a, b) * b;
}
int main(){
    int a, b, c ,d;
    cin >> a >> b >> c >> d;
    int numitor = cmmmc(b, d);
    int numarator = a*(numitor/b) + c*(numitor/d);
    int red = cmmdc(numitor, numarator);
    cout << numarator/red << " " << numitor/red << endl;

    numitor = b*d;
    numarator = a*c;
    red = cmmdc(numitor, numarator);
    cout << numarator/red << " " << numitor/red;
}
