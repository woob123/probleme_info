#include <iostream>
#include <algorithm>
using namespace std;
#include <cstring>
int voc(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int con(char c){
    return isalpha(c) && !voc(c);
}
int main(){
    char a[35];
    char b[35];
    char s[35];
    cin >> a >> b;
    int n = strlen(a);
    for(int i = 0; i <= n; i++){
        if(voc(a[i]) && voc(b[i]))
            s[i] = '*';
        else if(con(a[i]) && con(b[i]))
            s[i] = '#';
        else
            s[i] = '?';
    }
    for(int i = 0; i < n; i++)
        cout << s[i];
}
