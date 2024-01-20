#include <iostream>
#include <cstring>
using namespace std;
void UpperLower(const char a[], char U[], char L[]) {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 97 && a[i] <= 122) {
            U[i] = a[i] - 32;
        }
        else
            U[i] = a[i];
        if (a[i] >= 65 && a[i] <= 90) {
            L[i] = a[i] + 32;
        }
        else
            L[i] = a[i];
    }
    U[strlen(a)] = '\0';
    L[strlen(a)] = '\0';
}
