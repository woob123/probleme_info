#include <fstream>
#include <string>
#include <vector>
using namespace std;
ifstream cin("paritate.in");
ofstream cout("paritate.out");

char bit(string* str, int from, int to) {
    int nr1 = 0;
    for (int i = from + 1; i < to; i++) {
        if (str->at(i) == '1') {
            nr1++;
        }
    }
    return nr1 % 2 == 0 ? '0' : '1';
}

int main(){
    string str;
    cin>>str;
    bool ok = true; //bool false = true;
    vector<int> gres(0);
    for (int i = 0; i < str.size(); i += 8) {
        char but = bit(&str, i, i + 8);
        if (but != str[i]) {
            ok &= false;
            gres.push_back(i / 8);
        }
    }
    if (ok) {
        cout<<"DA"<<endl;
        for (int i = 1; i < str.size(); i += 8) {
            int p = 1, nr = 0;
            for (int j = i + 6; j >= i; j--) {
                nr += p * (str[j] - '0');
                p*=2;
            }
            cout<<char(nr);
        }
    } else {
        cout<<"NU"<<endl;
        for (int g : gres) {
            cout<<g<<' ';
        }
    }
}
