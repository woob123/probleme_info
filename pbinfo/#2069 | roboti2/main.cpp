#include <fstream>
using namespace std;
ifstream fin("roboti2.in");
ofstream fout("roboti2.out");
int main(){
    int rob[100001];
    int n;
    int c;
    fin >> c;
    fin >> n;
    for(int i = 1; i <= n; i++){
        fin >> rob[i];
    }
    
    if(c == 1){
        int l = 1, lmax = 1;
        int x = rob[0];
        int i = 1, ok = 0;
        while(i < n && ok < 2){
            if(rob[i] < rob[i+1]){
                l++;
            }
            else{
                l = 0;
            }
            if(l > lmax)
                lmax = l;
            i++;
            if(i == n){
                if(x > i){
                    l++;
                    i = 1;
                }
                ok++;
            }
        }
        
        fout << lmax;
        return 0;
    }
    else{

    }
}
