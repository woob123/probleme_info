#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool voc(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main(){
    char a[300];
    cin.getline(a, 105);

    int n = strlen(a);
    int cn = n;
    for(int i = 0; a[i]; i++){
        if(voc(a[i])){
            for(int j = n + 1; j > i; j--)
                a[j] = a[j-1];
            a[i+1] = '*';
            n++;
            i++;
        }
    }
    if(n == cn)
        cout << "FARA VOCALE";
    else
        cout << a;
}
