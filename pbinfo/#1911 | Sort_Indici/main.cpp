#include <iostream>
#include <algorithm>
using namespace std;
struct numar{
    int val, poz;
}v[101];
bool comp(numar a, numar b){
    if(a.val == b.val)
        return a.poz < b.poz;
    return a.val < b.val;
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> v[i].val;
        v[i].poz = i;
    }
    sort(v+1, v+n+1, comp);
    for(int i = 1; i <= n; i++){
        cout << v[i].val << " " << v[i].poz << " ";
    }
}
