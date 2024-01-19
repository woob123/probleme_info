#include <iostream>
#include <algorithm>
using namespace std;
int main(){ 
    char a[256];
    cin.getline(a, 256);
    int i = 1;
    a[0] -= 32;
    while(a[i + 1]){
        if((a[i] != ' ' && a[i+1] == ' ')||(a[i] != ' ' && a[i-1] == ' ')){
            a[i]-=32;
        }
        i++;
    }
    a[i] -= 32;
    cout << a;
}
