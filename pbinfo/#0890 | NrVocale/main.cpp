#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int f[200];
bool voc(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
bool mic(char c){
    return c >= 'a' && c <= 'z';
}
int main(){
    char a[300];
    cin.getline(a, 256);

    for(int i = 0; a[i]; i++){
        if(voc(a[i])){
            if(mic(a[i]))
                a[i] -= 32;
            f[(int)a[i]]++;
        }
    }

    int max = 0;
    char rez;

    for(int i = 'A'; i <= 'Z'; i++)
        if(voc(i) && f[i] > max){
            max = f[i], rez = i;
        }
    cout << rez;
}
