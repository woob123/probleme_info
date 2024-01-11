#include <bits/stdc++.h>

using namespace std;

ifstream in ("produs2.in");
ofstream out ("produs2.out");

int n, a[1000001], st=1, lc;
long long prod=1, p, nr;

int main(){
    in >> n >> p;
    for (int i=1; i<=n; i++)
        in >> a[i];

    for (int i=1; i<=n; i++){
        prod=1LL*prod*a[i];
        lc++;
        if (prod<p){
            nr+=lc;
        }
        else{
            while(prod>p && st<i){
                prod=prod/a[st];
                st++;
                lc--;
            }
            nr+=lc;
        }

    }
    out << nr;
    return 0;
}
