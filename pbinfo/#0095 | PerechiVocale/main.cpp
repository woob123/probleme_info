#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool voc(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main(){
    char a[260];
    cin.getline(a, 256);
    int n = strlen(a);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(voc(a[i]) && voc(a[i+1]))
            cnt++;
    }
    cout << cnt;
}
