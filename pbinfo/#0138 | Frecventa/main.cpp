#include <iostream>
#include <algorithm>
using namespace std;
int f[256];
#include <cstring>
int voc(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main(){
    char s[256];
    cin.getline(s, 256);
    int maxk =0;
    char maxchar = 0;
    for(int i = 0; s[i]; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            f[s[i]]++;
            if(f[s[i]] > maxk)
                maxk = f[s[i]], maxchar = s[i];
            else if (f[s[i]] == maxk && s[i] < maxchar)
                maxchar = s[i]; 
        }   
    }
    cout << maxchar;
}
