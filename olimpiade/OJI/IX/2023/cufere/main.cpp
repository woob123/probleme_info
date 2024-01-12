#include <fstream>
using namespace std;
ifstream fin("cufere.in");
ofstream fout("cufere.out");
int frec[100];
int n;
int c;
bool prim(int n){
    if(n < 2 || (n%2==0 && n > 2))
        return false;
    for(int d = 3; d*d <= n; d+=2)
        if(n%d==0)
            return false;
    return true;
}
int main(){
    fin >> c;
    fin >> n;
    for(int i = 1; i <= n*27; i++){
        short x;
        fin >> x;
        frec[x%100] = frec[x%100] + (x/100);
    }
    if(c == 1){
        for(int i = 10; i < 100; i++){
            if(frec[i] > 0){
                fout << i << " " << frec[i] << '\n';
            }
        }
    }
    else if(c == 2){
        int k = 0;
        for(int i = 10; i < 100; i++){
            if(frec[i] > 0){
                if(prim(i)){
                    while(frec[i] > 0){
                        if (frec[i] >= 16){
                            fout << 16 << i << ' ';
                            k++;
                            frec[i] -= 16;
                        }
                        else{
                            fout << frec[i] << i << ' ';
                            k++;
                            frec[i] = 0;
                        }
                        if (k%9 == 0)
                            fout << '\n';
                    }
                }
                else{
                    while (frec[i] > 0){
                    if (frec[i] >= 64){
                        fout << 64 << i << ' ';
                        k++;
                        frec[i] -= 64;
                    }
                    else{
                        fout << frec[i] << i << ' ';
                        k++;
                        frec[i] = 0;
                    }
                    if (k % 9 == 0)
                        fout << '\n';
                    }
                }
            }
        }
        while(k < n*27){
            fout << 0 << " ";
            k++;
            if(k%9 == 0)
                fout << '\n';
        }
    }
}
