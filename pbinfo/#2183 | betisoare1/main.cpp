#include <fstream>
using namespace std;
ifstream fin("betisoare1.in");
ofstream fout("betisoare1.out");
int main(){
    int n;
    fin >> n;
    int lg = 1, lgmax = 0;
    int ap = 0;
    char prec, x;
    char current;
    bool max1 = false;
    fin >> x;
    n--;
    prec = x;
    for(int i = 1; i <= n; i++){
        fin >> x;
        if(prec == x){
            lg++;
            current = x;
        }
        else{
            if(lg > lgmax){
                lgmax = lg;
                ap = 1;
                if(current == '1')
                    max1 = true;
                else
                    max1 = false;
            }
            else if(lg == lgmax){
                ap++;
            }
            lg = 1;
        }
        prec = x;
    }
    if(lg > lgmax){
        lgmax = lg;
        ap = 1;
        if(current == '1')
            max1 = true;
        else
            max1 = false;
    }
    else if(lg == lgmax && (max1 && current == '1')){
        ap++;
    }
    if(max1){
        fout << 1 << " " << lgmax << '\n' << ap;
        return 0;
    }
    fout << current << " " << lgmax << '\n' << ap;
}
