#include <fstream>
#define NMAX 100001
using namespace std;
int v[NMAX], c[NMAX], poz[NMAX], cnt, x, pozal;
int CautareBinara (int x){
    int st, dr, mij, poz;
    poz=-1;
    st=0;
    dr=cnt-1;
    while (st<=dr){
        mij=(st+dr)/2;
        if (c[mij]==x){
            poz=mij;
            break;
        }
        if (c[mij]>x)
            dr=mij-1;
        else
            st=mij+1;
    }
    return poz;
}
int main(){
    ifstream cin ("schi.in");
    ofstream cout ("schi.out");
    int n, k, x, b, f, max;
    cin>>n;
    max=-1;
    cnt=0;
    for (int i=0; i<n; i++){
        cin>>v[i];
        if (v[i]>max){
            max=v[i];
            c[cnt]=v[i];
            poz[cnt]=i;
            cnt++;
        }
    }
    cin>>k;
    for (int i=0; i<k; i++){
        cin>>x;
        pozal=CautareBinara(x);
        if (pozal==cnt-1)
            cout<<n-poz[pozal]<<" ";
        else if (pozal<0)
            cout<<0<<" ";
        else
            cout<<(poz[pozal+1]-poz[pozal])<<" ";
    }
    return 0;
}
