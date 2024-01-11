#include <fstream>
using namespace std;
ifstream fin("factorial3.in");
ofstream fout("factorial3.out");
int desc(int n){
    int sum = 0;
    int d = 2;
    int p;
    while(n > 1){
        p = 0;
        while(n%d==0){
            ++p;
            n/=d;
        }
        if(p){
            sum += p;
        }
        ++d;
        if(n > 1 && d*d > n){
            d = n;
        }
    }
    return sum;
}
int main(){
    int n;
    fin >> n;
    int s = 0;
    for(int i = 2; i <= n; i++){
        s += desc(i);
    }
    fout << s;
}
