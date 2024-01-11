#include <fstream>
using namespace std;
ifstream fin("broscute.in");
ofstream fout("broscute.out");
int a[1001], b[1001], ind[1001];
bool se_joaca(int a[], int b[], int n){
    for(int i = 1; i <= n+1; i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}
int main(){
    int n, c;
    fin >> n >> c;
    if(c == 2){
        for(int i = 1; i <= n+1; i++)
            fin >> a[i];
        for(int i = 1; i <= n+1; i++)
            fin >> b[i];

        // verificam daca se joaca
        if(se_joaca(a, b, n)){
            fout << "broscutele nu se joaca";
            return 0;
        }

        //unde e nufarul in plus
        int nufar = 0;
        for(int i = 1; i <= n+1; i++)
            if(a[i] == 0)
                nufar = i;
        
        //schimbam pozitiile broastelor
        while(!se_joaca(a, b, n)){
            if(a[nufar] != b[nufar]){
                for(int i = 1; i <= n+1; i++)
                    if(a[i] == b[nufar]){
                        fout << a[i] << " " << i << " " << nufar << endl;
                        swap(a[i], a[nufar]);
                        nufar = i;
                        break;
                    }
            }
            else if(a[nufar] == b[nufar]){
                for(int i = 1; i <= n+1; i++)
                    if(a[i] != b[i]){
                        fout << a[i] << " " << i << " " << nufar << endl;
                        swap(a[i], a[nufar]);
                        nufar = i;
                        break;
                    }
            }
        }
    }
    else{
        int cnt=0;
        for(int i = 1; i <= n+1; i++)
            fin >> a[i];
        for(int i = 1; i <= n+1; i++)
            fin >> b[i];

        //verificam daca se joaca
        if(se_joaca(a, b, n)){
            fout << "broscutele nu se joaca";
            return 0;
        }

        //unde e nufarul in plus
        int nufar = 0;
        for(int i = 1; i <= n+1; i++)
            if(a[i] == 0)
                nufar = i;

        //schimbam broastele
        while(!se_joaca(a, b, n)){
            if(a[nufar] != b[nufar]){
                for(int i = 1; i <= n+1; i++)
                    if(a[i] == b[nufar]){
                        cnt++;
                        swap(a[i], a[nufar]);
                        nufar = i;
                        break;
                    }
            }
            else if(a[nufar] == b[nufar]){
                for(int i = 1; i <= n+1; i++)
                    if(a[i] != b[i]){
                        cnt++;
                        swap(a[i], a[nufar]);
                        nufar = i;
                        break;
                    }
            }
        }
        fout << cnt;
    }
}
