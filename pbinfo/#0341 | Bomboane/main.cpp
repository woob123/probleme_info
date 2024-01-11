#include <fstream>
using namespace std;
ifstream fin("bomboane.in");
ofstream fout("bomboane.out");
struct bomboana{
    int poz, bombo;
}v[1001];
bool ok(bomboana v[], int n){
    for(int i = 1; i < n; i++){
        if(v[i].bombo != v[i+1].bombo)
            return false;
    }
    return true;
}
int main(){
    int n;
    fin >> n;
    int s = 0;
    int mini = 10001, minipoz = 0;
    int maxi = 0, maxipoz = 0;
    for(int i = 1; i <= n; i++){
        fin >> v[i].bombo;
        v[i].poz = i;
        if(v[i].bombo > maxi)
            maxi = v[i].bombo, maxipoz = i;
        if(v[i].bombo < mini)
            mini = v[i].bombo, minipoz = i;
        s += v[i].bombo;
    }

    int val = s/=n;
    int cnt = 0;
    if(s%n == 0){
        fout << -1;
        return 0;
    }
    else{
        while(!ok(v, n)){
            int val1 = val - v[minipoz].bombo;
            fout << maxipoz << " " << minipoz << " " << val1 << endl;
            v[maxipoz].bombo -= val1;
            v[minipoz].bombo += val1;
            maxi -= val1;
            mini += val1;
            for(int i = 1; i <= n; i++){
                if(v[i].bombo > maxi)
                    maxi = v[i].bombo, maxipoz = i;
                if(v[i].bombo < mini)
                    mini = v[i].bombo, minipoz = i;
            }
            cnt++;
        }
    }
}
