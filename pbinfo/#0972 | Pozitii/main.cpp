#include <iostream>
#include <algorithm>
using namespace std;
bool voc(char ch){
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
bool cons(char ch){
    return ch >= 'a' && ch <= 'z' && !voc(ch);
}
int main(){ 
    char a[256];
    cin.getline(a, 255);
    int i = 1;
    int cnt = 0;
    while(a[i+1]){
        if(voc(a[i]) && cons(a[i-1]) && cons(a[i+1]))
            cnt++;
        i++;
    }
    cout << cnt;
}
