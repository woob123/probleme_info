#include <fstream>
using namespace std;
ifstream fin("egale.in");
ofstream fout("egale.out");
int main(){
    int c;
    fin >> c;
    if(c == 1){
        long long a, b;
        fin >> a >> b;
        long long crt = 1;
        while(crt <= b){
            for(int i = 1; i <= 9; i++)
                if(a <= i*crt && i*crt <= b)
                    fout << i*crt << " ";
            crt = crt*10 + 1;
        }
    }
    else{
        int x;
        fin >> x;
        int crt = 1;
        while(crt <= x){
            for(int i = 1; i <= 9; i++){
                for(int j = 1; j <= crt; j++)
                    fout << i;
                fout << " ";
            }
            crt++;
        }
    }
}
