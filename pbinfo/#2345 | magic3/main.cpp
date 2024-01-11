#include <fstream>
using namespace std;
ifstream fin("magic3.in");
ofstream fout("magic3.out");
int nr_div(int n){
    int cnt = 0;
    for(int i = 1; i * i <= n; i++){
        if(n%i==0){
            cnt += 2;
            if(i*i == n)
                cnt -= 1;
        }
    }
    return cnt;
}
int main(){
    int n;
    fin >> n;
    int mini = 1000000000, ap = 0;
    for(int i = 1; i <= n; i++){
        int x;
        fin >> x;
        if(nr_div(x) < mini)
            mini = nr_div(x), ap = 1;
        else if(nr_div(x) == mini)
            ap++;
    }
    fout << ap;
}
