#include <iostream>
#include <algorithm>
using namespace std;
struct obiect{
    int g, v;
    double raport;
};
bool crescator(obiect a, obiect b){
    return a.raport > b.raport;
}
int main(){
    int n, gmax;
    double c;
    obiect a[1001];
    cin >> n >> gmax;
    for(int i = 1; i <= n; i++){
        cin >> a[i].g >> a[i].v;
        a[i].raport = (double)(a[i].v/a[i].g);
    }

    sort(a + 1, a + n + 1, crescator);
    for(int i = 1; i <= n; i++){
        if(gmax - a[i].g < 0){
            c = c + (double)((a[i].v * gmax)/a[i].g);
            break;
        }
        else{
            c += a[i].v;
            gmax -= a[i].g;
        }
    }
    cout << (double)c;
}
