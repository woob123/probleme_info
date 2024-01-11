#include <fstream>
using namespace std;
ifstream fin("palindrom3.in");
ofstream fout("palindrom3.out");
int f[40];
int main(){
    long long n;
    int cif_max = -1;
    fin >> n;
    if(n < 10){
        fout << n;
        return 0;
    }
    while(n){
        f[n%10]++;
        if(n%10 > cif_max)
            cif_max = n%10;
        n/=10;
    }

    int nr_impar = 0;
    for(int i = 0; i < 10; i++){
        if(f[i]%2==1)
            nr_impar = i;
    }
    if(cif_max == nr_impar){
        for(int i = 9; i >= 0; i--)
            for(int j = 1; j <= f[i]/2; j++)
                fout << i;

        fout << nr_impar;

        for(int i = 0; i < 10; i++){
                for(int j = 1; j <= f[i]/2; j++)
                    fout << i;
            
        }
    }
    else{
        for(int i = 9; i >= 0; i--){
            if(i != nr_impar){
                for(int j = 1; j <= f[i]/2; j++)
                    fout << i;
            }
        }
        for(int i = 1; i <= f[nr_impar]; i++)
            fout << nr_impar;

        for(int i = 0; i < 10; i++){
            if(i != nr_impar){
                for(int j = 1; j <= f[i]/2; j++)
                    fout << i;
            }
        }
    }
}
