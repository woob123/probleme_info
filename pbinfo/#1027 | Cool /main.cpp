#include <fstream>
#include <algorithm>
using namespace std;
ofstream cout("cool.out");
ifstream cin("cool.in");
int a[5001], ap[5001], k, n, amax = -1, amin = 1001, p, lg_max = -1, cnt;
void sterge(){
    for(int i = 1; i <= n; i++)
        ap[i] = 0;
}
int main(){
    cin >> p;
    cin >> n >> k;
    if(p == 1){
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        bool ok = true;
        for(int i = 1; i <= k; i++){
            ap[a[i]]++;
            if(ap[a[i]] > 1)
                ok = false;
            if(a[i] > amax) 
                amax = a[i];
            if(a[i] < amin) 
                amin = a[i];
        }
        if(ok && amax-amin+1==k)
            cout << amax;
        else{
            int max_ap = 0;
            for(int i = 1; i <= k; i++)
                if(ap[a[i]] == 1)
                    max_ap++;
            cout << max_ap;
        }
    }
    else{
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        for(int i = 1; i < n; i++){
            amax = a[i], amin = a[i]; ap[a[i]]++;
            for(int x = i+1; x <= n; x++){
                if(ap[a[x]]) break;
                ap[a[x]] = 1;
                if(a[x] > amax)
                    amax = a[x];
                else if(a[x] < amin)
                    amin = a[x];
                ap[a[x]]++;
                if(amax-amin==x-i){
                    if(amax-amin+1 > lg_max){
                        lg_max = amax-amin+1; 
                        cnt = 1;
                        }
                    else if(amax-amin+1 == lg_max)
                        cnt++;
                }
            }
            sterge();
        }
        cout << lg_max << '\n' << cnt;
    }
    return 0;
}
