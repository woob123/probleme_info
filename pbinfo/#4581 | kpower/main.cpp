#include <fstream>
using namespace std;
ifstream fin("kpower.in");
ofstream fout("kpower.out");
int c, n;
short int k;
long long x;
long long s[1000005];
///cer 1
long long maxi;
///cer 2
int l, lmax;
///cer 3
int st, dr;
long long smax;
bool kpower(long long a, short int p) {
    if (p == 1 and a != 1)
        return false;
    long long aux = 1;
    while (aux < a)
        aux *= p;
    return a == aux;
}
int main() {
    fin >> c;
    fin >> k >> n;
    if (c == 1) {
        for (int i = 1; i <= n; i++) {
            fin >> x;
            if (kpower(x, k) && x > maxi)
                maxi = x;
        }
        fout << maxi;
    }
    else if (c == 2) {
        for (int i = 1; i <= n; i++) {
            fin >> x;
            if (kpower(x, k))
                l++;
            else {
                if (l > lmax)
                    lmax = l;
                l = 0;
            }
        }
        if (l > lmax)
            lmax = l;
        fout << lmax;
    }
    else{
        for (int i = 1; i <= n; i++) {
            fin >> x;
            s[i] = s[i-1] + x;
            if (kpower(x, k))
                l++;
            else {
                if (l > lmax) {
                    lmax = l;
                    dr = i - 1;
                    st = i - lmax;
                    smax = s[dr] - s[st-1];
                    if ((s[dr] - s[st - 1]) >= smax)
                        smax = s[dr] - s[st - 1];
                }
                if(l == lmax){
                    if ((s[dr] - s[st - 1]) >= smax)
                        smax = s[dr] - s[st - 1];
                }
                l = 0;
            }
        }
        if (l > lmax) {
            lmax = l;
            dr = n;
            st = n - lmax + 1;
            smax = s[dr] - s[st-1];
            if ((s[dr] - s[st - 1]) >= smax)
                smax = s[dr] - s[st - 1];
        }
        if(l == lmax){
            dr = n;
            st = n - lmax + 1;
            if ((s[dr] - s[st - 1]) >= smax)
                smax = s[dr] - s[st - 1];
        }
        fout << smax;
    }
}
