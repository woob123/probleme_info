#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    char a[10];
    cin.getline(a, 256);

    int n = strlen(a);
    for(int i = 0; a[i]; i++){
        for(int j = 0; j < n-i; j++)
            cout << a[j];
        cout << endl;
    }

    for(int i = 0; a[i]; i++){
        for(int j = i; j < n; j++)
            cout << a[j];
        cout << endl;
    }
}
