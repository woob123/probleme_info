#include <fstream>

using namespace std;

ifstream fin("secvsummax.in");
ofstream fout("secvsummax.out");

int main(){
    int n,A[100001];
    fin>>n;
    for(int i=1; i<=n; i++)
        fin>>A[i];

    int st, dr, Smax = -2000000000, S = -1, start;
    for(int i = 1 ; i <= n ; ++ i){
        if(S < 0)
            S = 0, start = i;
        S += A[i];
        if(S > Smax)
            Smax = S, st = start, dr = i;
    }
    fout << st << " " << dr;
    return 0;
}
