#include <fstream>
using namespace std;
ifstream fin("adiacenta1.in");
ofstream fout("adiacenta1.out");
bool v[101][101]; //matricea de adiacenta

int main(){
    int n;
    int x, y;
    fin >> n;
    while(fin >> x >> y) {
        v[x][y] = 1;
        v[y][x] = 1;
    }

    for(int i = 1; i <= n; i++, fout << '\n'){
        int cntlin = 0;
        for(int k = 1; k <= n; k++)
            if(v[i][k] == 1)
                cntlin++;
        fout << cntlin << " ";
        for(int j = 1; j <= n; j++)
            if(v[i][j] == 1)
                fout << j << " ";
    }
}
