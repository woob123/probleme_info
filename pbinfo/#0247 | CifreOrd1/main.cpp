#include <fstream>
using namespace std;
ifstream fin("cifreord1.in");
ofstream fout("cifreord1");
int main(){
    int n;
    int f[10];
    while(fin >> n){
        do{
            f[n%10]++;
            n/=10;
        }while(n);
    }
    int cnt = 0;
    for(int i = 9; i >= 0; i--){
        for(int j = 1; j <= f[i]; j++)
            fout << f[i] << " ", cnt++;
        if(cnt%20)
            fout << endl;
    }
}
