#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool voc(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
int main(){
    char a[10];
    cin.getline(a, 256);

    int n = strlen(a);
    char x = '0', y = '0';
    int px, py;
    for(int i = 0; i < n; i++)
        if(voc(a[i])){
            x = a[i], px = i;
            break;
        }
    
    for(int i = n-1; i >= 0; i--)
        if(!voc(a[i])){
            y = a[i], py = i;
            break;
        }
    
    if(x == '0' || y == '0' || (x == '0' && y == '0')){
        cout << "IMPOSIBIL";
        return 0;
    }
    swap(a[px], a[py]);
    cout << a;
}
