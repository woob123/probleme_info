#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool voc(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main(){
    char a[25];
    cin >> a;
    int n = strlen(a);
    for(int i = 0; i < n; i++){
        if(!voc(a[i]))
            cout << a[i];
    }
}
