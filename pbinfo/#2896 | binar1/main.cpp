#include <fstream>
using namespace std;
ifstream fin("binar.in");
ofstream fout("binar.out");
int nr1(long long n){
    int cnt = 0;
    while(n){
        cnt++;
        n -= (n&-n);
    }
    return cnt;
}
int main(){
    int c;
    fin >> c;
    if(c == 1){
        int n;
        int maxi = 0, nr=0;
        fin >> n;
        for(int i = 1; i <= n; i++){
            int x;
            fin >> x;
            if(nr1(x) > maxi)
                maxi = nr1(x), nr = x;
            else if(nr1(x) == maxi)
                if(x > nr)
                    nr = x;
        }
        fout << nr;
        return 0;
    }
    else{
        int n;
        fin >> n;
        if(n == 1){
            int x;
            fin >> x;
                if(x == 0){
                    fout << 0 << " " << 0;
                    return 0;
                }
            fout << 1 << " " << 1;
            return 0;
        }
        int x;
        fin >> x;
        int prev = x;
        int l = 1, lmax = 1, poz = 1, pozmax = 1;
        for(int i = 2; i <= n; i++){
            fin >> x;
            //fout << nr1(v[i]) << " " << nr1(v[i-1]) << endl;
            if(nr1(x) == nr1(prev))
                l++;
            else
                l = 1, poz = i;
            if(l > lmax)
                lmax = l, pozmax = poz;
            prev = x;
        }
        fout << lmax << " " << pozmax;
        return 0;
    }
}
