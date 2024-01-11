#include <fstream>
using namespace std;
ifstream fin("numere6.in");
ofstream fout("numere6.out");
int f[10]; 
int main(){
    int a, b;
    fin >> a >> b;
    if(a == 0) f[0]++;
    if(b == 0) f[0]++;
    while(a){
        f[a%10]++;
        a/=10;
    }
    while(b){
        f[b%10]++;
        b/=10;
    }
    for(int i = 9; i >= 0; i--)
        for(int j = 1; j <= f[i]; j++)
            fout << i;
    
}
