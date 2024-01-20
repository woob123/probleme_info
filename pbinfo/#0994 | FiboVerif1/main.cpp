#include <fstream>
using namespace std;
ifstream cin("fiboverif1.in");
ofstream cout("fiboverif1.out");
bool fibonacci(long int x){
    long int nr1=1, nr2=1, aux;
    while(nr1<=x){
        aux = nr1;
        nr1 = nr2;
        nr2 += aux;
        if(nr1==x)
            return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(fibonacci(x))
            cout << x << " ";
    }
}
