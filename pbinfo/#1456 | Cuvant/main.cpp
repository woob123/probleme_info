#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool voc(char ch){
    return ch == 'e' || ch == 'a' || ch == 'u' || ch == 'o';
}
int main(){ 
    char a[110];
    cin >> a;
    int i = 0, cnt = 0;
    int n = strlen(a);
    while(a[i]){
        if(voc(a[i])){
            cout << "NU";
            return 0;
        }
        if(a[i] == 'i')
            cnt++;
        i++;
    }
    if(cnt == n)
        cout << "NU";
    else
        cout << "DA";
}
