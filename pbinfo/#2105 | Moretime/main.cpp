#include <fstream>
#include <algorithm>
using namespace std;
int rest[10001];
ifstream fin("moretime.in");
ofstream fout("moretime.out");
struct cont{
    int cod, time;
}v[10001];
bool cont_premium(int a){
    int uc = a%10;
    while(a > 10)
        a/= 10;
    if(a == uc)
        return true;
    return false;
}
bool cresc(cont a, cont b){
    return a.time < b.time;
}
int main(){
    int n;
    fin >> n;
    cont prem[10001];
    int k = 1;
    for(int i = 1; i <= n; i++){
        fin >> v[i].cod >> v[i].time;
        if(cont_premium(v[i].cod)){
            prem[k].cod = v[i].cod;
            prem[k].time = v[i].time;
            k++;
        }
    }
    k--;
    fout << k << '\n';

    int s1 = 0, s2 = 0;
    int sum[10001];
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= i; j++){
            sum[i] = sum[i-1] + prem[j].time;
        }
        if(sum[i] % k == 0){
            for(int j = 1; j <= i; j++)
                fout << prem[j].cod << " ";
        }
        int r = sum[i]%k;
        if(rest[r] != 0){
            s1 = rest[r];
            s2 = i;
        }
        else{
            rest[r] = i;
        }
        if(s1 != 0 && s2 != 0){
            break;
        }
    }
    fout << s2-s1 << endl;
    for(int i = s1+1; i <= s2; i++){
        fout << prem[i].cod << " ";
    }
}
