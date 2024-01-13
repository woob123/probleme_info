#include <fstream>
#include <algorithm>
using namespace std;
int P[10];

int categoria(int n){
    while(n>9)
        n/=10;
    return n;
}

int starea(int n){
    while(n>99)
        n/=10;
    return n%10;
}

int main(){
    int c,n;
    ifstream f("produse.in");
    f>>c>>n;
    int a[n];
    for(int i=0;i<n;++i)
        f>>a[i];
    ofstream g("produse.out");
    if(c==1){
        int s=0,e=0;
        for(int i=0;i<n;++i)
            if(starea(a[i])%2)
                ++e;
            else
                ++s;
        g<<s<<' '<<e<<'\n';
    }
    else{
        sort(a,a+n);
        for(int i=0;i<n;++i)
            P[categoria(a[i])]=1;
        for(int j=1;j<=9;++j)
            if(P[j]){
                g<<j<<' ';
                for(int i=0;i<n;++i)
                    if(categoria(a[i])==j)
                        g<<a[i]<<' ';
                g<<'\n';
            }
    }
    return 0;
}
