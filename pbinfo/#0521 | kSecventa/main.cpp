#include <iostream>

using namespace std;

int n, k, v[1001], lungime, poz1, poz2;
bool ok;

int main(){
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    lungime = n/k;
    for (int nr=0; nr<k-1; nr++){
        for (int s=nr+1; s<k; s++){
            ok=1;
            for (int j=1; j<=lungime; j++) {
                if (v[nr*lungime+j]!=v[s*lungime+j]){
                    ok=0;
                }
            }
            if (ok){
                poz1=nr+1;
                poz2=s+1;
                cout << poz1 << " " << poz2;
                return 0;
            }

        }
    }
    cout << "NU";
    return 0;
}
