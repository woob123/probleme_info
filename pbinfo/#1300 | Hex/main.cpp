#include <fstream>
#include <string>
using namespace std;
ifstream cin("hex.in");
ofstream cout("hex.out");

char toHex(string* str, int from, int to) {
    int pow = 1, nr = 0;
    for (int i = to - 1; i >= from; i--) {
        nr += pow * (str->at(i) - 48);
        pow *= 2;
    }
    return nr > 9 ? 'A' + (nr - 10) : nr + 48;
}

int main(){
    string str;
    cin>>str;
    while (str.length() % 4 != 0) {
        str.insert(str.begin(), 48);
    }
    for (int i = 0; i < str.length(); i += 4) {
        cout<<toHex(&str, i, i + 4);
    }
    return 0;
}
