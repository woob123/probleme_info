#include <fstream>
using namespace std;
ifstream cin("3cifre.in");
ofstream cout("3cifre.out");
struct minmax{
    long long nr, first, last;
    int ap;
}mini, maxi;
int frec[1001];
int max_frec;
int main() {
    int n, c;
    mini.nr = 1000;
    cin >> n >> c;
    for(int i = 1; i <= n; i++){
        long long x;
        cin >> x;
        long long cx = x;
        while(x > 99){
            int nr = x%1000;
            if(nr >= 100){
                frec[nr]++;
                if(frec[nr] > max_frec)
                    max_frec = frec[nr];
                if(nr < mini.nr){
                    mini.nr = nr;
                    mini.ap = 1;
                    mini.first = cx;
                    mini.last = cx;
                }
                else if(nr == mini.nr){
                    mini.ap++;
                    mini.last = cx;
                }
                if(nr > maxi.nr){
                    maxi.nr = nr;
                    maxi.ap = 1;
                    maxi.first = cx;
                    maxi.last = cx;
                }
                else if(nr == maxi.nr){
                    maxi.ap++;
                    maxi.last = cx;
                }
            }
            x/=10;
        }
    }
    if(c == 1){
        cout << mini.nr << " " << mini.ap << " " << mini.first << " " << mini.last << '\n';
        cout << maxi.nr << " " << maxi.ap << " " << maxi.first << " " << maxi.last << '\n';
    }
    else{
        cout << max_frec << '\n';
        for(int i = 100; i < 1000; i++){
            if(frec[i] == max_frec){
                cout << i << " ";
            }
        }
    }
}
