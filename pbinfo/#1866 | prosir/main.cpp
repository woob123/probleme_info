#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("prosir.in");
ofstream cout("prosir.out");
int main(){ 
    char a[201];
    cin.getline(a, 256);
    int i = 0;
    while(a[i] != '.'){
        if(a[i] != ' ' && a[i+1] == ' ' || a[i+1] == '.'){
            a[i] = '5';
        }
        i++;
    }
    cout << a;
}
