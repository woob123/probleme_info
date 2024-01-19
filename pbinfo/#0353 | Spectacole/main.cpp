#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("spectacole.in");
ofstream fout("spectacole.out");
int n;

struct spectacol{
    int start, fin;
} x[105];

int main(){
    fin >> n;
    for(int i=1; i<=n; i++)
        fin >> x[i].start >> x[i].fin;
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(x[i].fin > x[j].fin)
                swap(x[i], x[j]);
            else if(x[i].fin == x[j].fin && x[i].start > x[j].start)
                swap(x[i], x[j]);
    int os = x[1].start, of = x[1].fin, cnt = 1;
    for(int i=2; i<=n; i++){
        if(x[i].start >= of){
            of = x[i].fin;
            os = x[i].start;
            cnt++;
        }
    }
    fout << cnt;
    return 0;
}
