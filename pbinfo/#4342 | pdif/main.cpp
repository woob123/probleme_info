#include <fstream>
using namespace std;
ifstream fin("pdif.in");
ofstream fout("pdif.out");
int c;
int n;
int v[100001];
int main(){
    fin >> n >> c;
    for(int i = 1; i <= n; i++){
        fin >> v[i];
        if(v[i]%9 == 0)
            v[i] = 9; 
        else
            v[i] %= 9;
    }
    if(c == 1){
        int l = 1;
        int lmax = 0;
        int cnt = 0;
        for(int i = 2; i <= n; i++){
            if((v[i]%2 == 0 && v[i-1]%2 == 1) || (v[i]%2 == 1 && v[i-1]%2 == 0)){
                l++;
            }
            else{
                if(l > lmax){
                    lmax = l;
                    cnt = 1;
                }
                else if(l == lmax)
                    cnt++;
                l = 1;
            }
        }
        if(l > lmax){
            lmax = l;
            cnt = 1;
        }
        else if(l == lmax){
            cnt++;
        }
        fout << lmax << " " << cnt;
    }
    else{
        int l = 0;
        int lmax = 0;
        int poz = 0;
        for(int i = 2; i <= n; i++){
            if((v[i]%2 == 0 && v[i-1]%2 == 1) || (v[i]%2 == 1 && v[i-1]%2 == 0)){
                l++;
            }
            else{
                if(l > lmax){
                    lmax = l;
                    poz = i-1;
                }
                l = 0;
            }
        }
        fout << poz-lmax << " " << poz;
    }
}
