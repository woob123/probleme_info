#include <fstream>
using namespace std;
ifstream f("fibosnek.in");
ofstream g("fibosnek.out");
int fib[50];
void generare(){
    fib[1] = 1;
    fib[2] = 2;
    for(int i = 3; i <= 45; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
int main(){
    int c;
    int n, m;
    int cnt = 0;
    generare();
    f >> c >> n >> m;
    if(c == 1){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                int x;
                f >> x;
                int st = 1; 
                int dr = 46;
                while(st <= dr){
                    int mij = (st+dr)/2;
                    if(fib[mij] == x){
                        cnt++;
                        break;
                    }
                    else if(x < fib[mij]){
                        dr = mij-1;
                    }
                    else{
                        st = mij+1;
                    }
                }
            }
        }
        g << cnt;
    }
}
