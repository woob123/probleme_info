#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("gustare.in");
ofstream cout("gustare.out");
int porumb[500002], mere[500002];
int main(){
    int n, m, q, st, dr, x, meal;
    bool found;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> porumb[i];
    cin >> m;
    for(int i=1; i<=m; i++)
        cin >> mere[i];
    sort(porumb+1, porumb+n+1);
    sort(mere+1, mere+m+1);
    cin >> q;
    st = m;
    for(int i=1; i<=q; i++){
        cin >> x;
        st = 1;
        dr = m;
        found = false;
        while(!found && dr > 0 && st <= n){
            meal = porumb[st] + mere[dr];
            if(meal > x)
                dr--;
            if(meal < x)
                st++;
            else if(meal == x)
                found = true;
        }
        if(found)
            cout<<"DA"<<'\n';
        else
            cout<<"NU"<<'\n';
    }
    return 0 ;
}
