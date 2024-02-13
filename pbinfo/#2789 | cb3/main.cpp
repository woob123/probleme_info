#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;

int v[10010];
int s[10010];
int i, t, x, st, dr, mid, n;
int main(){
    ifstream fin ("cb3.in");
    ofstream fout("cb3.out");

    fin>>n>>t;
    for (i=1;i<=n;i++) {
        fin>>v[i];
    }
    sort(v+1, v+n+1);
    s[1] = v[1];
    for (i=2;i<=n;i++)
        s[i] = s[i-1] + v[i];
    for (i=1;i<=t;i++) {
        fin>>x;
        st = 1;
        dr = n;
        while (st <= dr) {
            int mid = (st + dr)/2;
            if (s[mid] <= x)
                st = mid+1;
            else
                dr = mid-1;
        }
        fout<<dr<<"\n";
    }

    return 0;
}
