#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool cif(char c){
    return c >= '0' && c <= '9';
}
int main(){
    char a[256];
    cin.getline(a, 256);

    int i = 0;
    int sum = 0;
    while(a[i]){
        int nr = 0;
        while(cif(a[i])){
            nr = nr*10+(a[i]-'0');
            i++;
        }
        sum += nr;
        if(a[i])
            i++;
    }
    cout << sum;
}
