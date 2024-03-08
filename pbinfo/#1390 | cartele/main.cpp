#include <fstream>

using namespace std;
ifstream cin("cartele.in");
ofstream cout("cartele.out");
int n, q;
short int cartela[51][51];
short int sablon[51][51];
short int extra[51][51];

void copy(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            extra[i][j] = cartela[i][j];
        }
    }
}

void rot() {
    copy();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
             cartela[i][j] = extra[n-j+1][i];
        }
    }
}

void flip() {
    for (int i = 1; i <= n / 2; i++) {
        swap(cartela[i], cartela[n - i + 1]);
    }
    copy();
}

void read(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> cartela[i][j];
        }
    }
}

void read_sablon(){
    cin >> n >> q;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> sablon[i][j];
        }
    }
}

bool check_cartele(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(sablon[i][j] != cartela[i][j])
                return false;
        }
    }
    return true;
}

bool verif() {
    for(int i = 1; i <= 4; i++){
        if(check_cartele()){
            return true;
        }
        else{
            rot();
        }
    }
    flip();
    for(int i = 1; i <= 4; i++){
        if(check_cartele()){
            return true;
        }
        else{
            rot();
        }
    }
    return false;
}

void solve(){
    read_sablon();
    for(int i = 1; i <= q; i++){
        read();
        if(verif()){
            cout << 1 << '\n';
        }
        else{
            cout << 0 << '\n';
        }
    }
}

int main() {
    solve();
}
