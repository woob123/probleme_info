#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char sir[101];
    cin.getline(sir,101);
    if (sir[0]!=' ' && (sir[0]>='A' && sir[0]<='Z')) cout<<sir[0];
    for (int i=0; i<strlen(sir); i++){
        if (sir[i]==' ' && sir[i+1]!=' ' && (sir[i+1]>='A' && sir[i+1]<='Z')) cout<<sir[i+1];
    }

    return 0;
}
