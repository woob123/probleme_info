#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[25], t[45], aux[25];
    cin >> s >> t;
    for(int i = strlen(t) - 1 ; i >= 0 ; --i)
        if(strchr("aeiouAEIOU" , t[i])){
            strcpy(aux , t + i + 1);
            strcpy(t+i , aux); 
        }
    strcat(t," ");
    strcat(t,s);
    cout << t ;
    return 0;
}
