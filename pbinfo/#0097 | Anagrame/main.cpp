#include <iostream>
#include <string.h>
using namespace std;
char a[21], b[21];
int fra[200], frb[200];
int main(){
    bool anagrama = true;
    cin >> a >> b;
    for(int i = 0; i < strlen(a); i++)
        fra[(int)a[i]] += 1;
    for(int i = 0; i < strlen(b); i++)
        frb[(int)b[i]] += 1;
    for(int i = 'a'; i <= 'z'; i++){ 
        if(fra[i] != frb[i]) {
            anagrama = false;
        }
    }
    cout << anagrama;
}
