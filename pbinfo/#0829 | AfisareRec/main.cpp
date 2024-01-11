#include <iostream>
using namespace std;
void afis(){
    int n;
    cin >> n;
    if(n)
        afis();
    cout << n << " ";
}
int main(){
    afis();
}
