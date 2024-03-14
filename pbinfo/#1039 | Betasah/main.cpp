#include <fstream>
using namespace std;
ifstream cin("betasah.in");
ofstream cout("betasah.out");
int a[1010][1010];
struct dame{
    int x, y;
}dam[110];
void fillChenar(int n){
    for(int i = 1; i <= n; i++){
        a[i][0] = 3;
    }
    for(int j = 0; j <= n+1; j++){
        a[n+1][j] = 3;
    }
    for(int i = 0; i <= n; i++) {
        a[i][i + 1] = 3;
    }
}
void fillTabla(int x, int y){
    int i, j;
    i = x, j = y;
    //nord
    while(i > 0 && (a[i-1][j] == 0 || a[i-1][j] == 4)){
        a[i-1][j] = 4;
        i--;
    }
    i = x, j = y;
    //sud
    while(a[i+1][j] == 0 || a[i+1][j] == 4){
        a[i+1][j] = 4;
        i++;
    }
    i = x, j = y;
    //vest
    while(j > 0 && (a[i][j-1] == 0 || a[i][j-1] == 4)){
        a[i][j-1] = 4;
        j--;
    }
    i = x, j = y;
    //est
    while(a[i][j+1] == 0 || a[i][j+1] == 4){
        a[i][j+1] = 4;
        j++;
    }
    //sud-est
    i = x, j = y;
    while(a[i+1][j+1] == 0 || a[i+1][j+1] == 4){
        a[i+1][j+1] = 4;
        i++, j++;
    }
    //nord-est
    i = x, j = y;
    while(i > 0 && (a[i-1][j+1] == 0 || a[i-1][j+1] == 4)){
        a[i-1][j+1] = 4;
        i--, j++;
    }
    //nord-vest
    i = x, j = y;
    while(j > 0 && (a[i+1][j-1] == 0 || a[i+1][j-1] == 4)){
        a[i+1][j-1] = 4;
        i++, j--;
    }
    //sud-vest
    i = x, j = y;
    while(i > 0 && j > 0 && (a[i-1][j-1] == 0 || a[i-1][j-1] == 4)){
        a[i-1][j-1] = 4;
        i--, j--;
    }
}
int main(){
    int n, d, k;
    cin >> n >> d >> k;
    //damele
    for(int i = 1; i <= d; i++){
        int x, y;
        cin >> x >> y;
        dam[i].x = x;
        dam[i].y = y;
        a[x][y] = 1;
    }
    //patrate gri
    for(int i = 1; i <= k; i++){
        int x, y;
        cin >> x >> y;
        a[x][y] = 2;
    }
    int maxi = 0;
    for(int i = 1; i <= n; i++){
        int cnt = 0;
        for(int j = 1; j <= i; j++){
            if(a[i][j] == 0 || a[i][j] == 1)
                cnt++;
        }
        if(cnt > maxi)
            maxi = cnt;
    }
    cout << maxi << '\n';
    fillChenar(n);
    for(int i = 1; i <= d; i++){
        fillTabla(dam[i].x, dam[i].y);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(a[i][j] == 4){
                cnt++;
            }
        }
    }
    cout << cnt;
}
