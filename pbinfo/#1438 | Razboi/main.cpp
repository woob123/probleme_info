#include <fstream>
using namespace std;
ifstream fin("razboi.in");
ofstream fout("razboi.out");
int sumdiv(int n){
    int s = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i==0){
            s += i + n/i;
            if(i*i == n)
                s -= i;
        }
    }
    return s;
}
int main(){
    int n, c;
    fin >> n >> c;
    if(c == 1){
        int cnt1 = 0, cnt2 = 0;
        for(int i = 1; i <= n; i++){
            int x;
            fin >> x;
            if(x%2 == 0)
                cnt1++;
            else
                cnt2++;
        }
        fout << cnt1 << " " << cnt2;
        return 0;
    }
    else if(c == 2){
        int cnt1 = 0, cnt2 = 0;
        for(int i = 1; i <= n; i++){
            int x;
            fin >> x;
            int sum = sumdiv(x);
            if(sum%2 == 0)
                cnt1++;
            else
                cnt2++;
        }
        fout << cnt1 << " " << cnt2;
        return 0;
    }
}
