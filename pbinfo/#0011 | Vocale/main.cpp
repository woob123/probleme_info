#include <iostream>
#include <algorithm>
using namespace std;
bool voc(char ch){
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
int main(){ 
    char a[21];
    cin >> a;
    int i = 0;
    while(a[i]){
        if(voc(a[i]))
            a[i] -= 32;
        i++;
    }
    cout << a;
}
