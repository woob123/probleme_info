#include <iostream>
using namespace std;
int frec[1001];
bool ok = false;
void desc(int n){
    int d = 2;
    int p;
    while(n > 1){
        p = 0;
        while(n%d == 0){
            p++;
            n/=d;
        }
        if(p == 1) {
            frec[d]++;
        }
        d++;
    }
    if(n)
        frec[n]++;
}
void verif(){
    ok = false;
    for(int i = 2; i <= 1000; i++){
        if(frec[i] != 0)
            ok = true;
    }
}
int main(){
    int n;
    int v[501];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        desc(v[i]);
    }

    verif();
    if(!ok){
        cout << "Sirul Y este vid.";
    }
    else{
        for(int i = 2; i <= 1000; i++){
            if(frec[i] != 0)
                cout << i << " ";
        }
    }
}
