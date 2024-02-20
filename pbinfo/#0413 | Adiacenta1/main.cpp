#include <fstream>
using namespace std;
ifstream fin("adiacenta1.in");
ofstream fout("adiacenta1.out");
bool v[101][101]; //matricea de adiacenta

int main(){
    int x, y;
    int maxi = 0;
    while(fin >> x >> y){
        v[x][y] = 1;
        v[y][x] = 1;
        if(x > maxi)
            maxi = x;
        if(y > maxi)
            maxi = y;
    }
    for(int i = 1; i <= maxi; i++, fout << '\n'){
        for(int j = 1; j <= maxi; j++) {
            fout << v[i][j] << " ";
        }
    }
}
