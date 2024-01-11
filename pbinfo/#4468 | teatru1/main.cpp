#include <fstream>
#include <cstring>
#define VAL 100000000
using namespace std;
ifstream fin("teatru.in");
ofstream fout("teatru.out");
void generare(string a[], int n){
    a[0] = 'A', a[1] = 'D';
    for(int i = 2; i <= n; i++){
        a[i] = strcat(a[i-2], a[i-1]);
    }
}
int n, p, l;
string a[VAL];
int main(){
    fin >> n >> p >> l;

}
