#include <fstream>
using namespace std;

ifstream cin("fantastice.in");
ofstream cout("fantastice.out");
int eratostene[1000001];
int divizori[1000001];
int n, x;
void ciur(){
    eratostene[0] = eratostene[1] = 1;

    for(int i = 2; i <= 1000; i++){
        if(!eratostene[i])
            for(int j = 2; i*j <= 1000000; j++)
                eratostene[i*j]=1;
    }
}

void div(){
    for(int i = 1; i <= 1000000; i++)
        for(int j = 1; i*j <= 1000000; j++)
            divizori[i*j]++;
}

void citire(){
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(!eratostene[divizori[x]])
            cnt++;
    }

    cout << cnt;
}
int main(){
    ciur();
    div();
    citire();
}
