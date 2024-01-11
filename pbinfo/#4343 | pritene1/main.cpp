#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("prietene.in");
ofstream fout("prietene.out");
struct numere{
    int nr, nrdiv;
}a[10005], b[10005];
int prime[37000];
int ciur[37000];
int k = 0;
void ciur_erat(){
    ciur[1]=ciur[0]=1;
    for(int i=2; i<=10000; i++)
        if(!ciur[i])
        {
            prime[++k]=i;
            for(int j=2; j*i<=10000; j++)
                ciur[i]=1;
        }
}
int desc(int n)
{
    int q=0,kk=1;
    while(prime[kk]<=n and kk<=k and n>1)
    {
        int p=0;
        while(n%prime[kk]==0)
            n/=prime[kk],p++;
        if(p) q++;
        kk++;

    }
    if(n>1)
        q++;
    return q;
}
int freca[1000] = {0};
int frecb[1000] = {0};
int main(){
    ios::sync_with_stdio(0);
    fin.tie(0);
    fout.tie(0);
    int n, m;
    int c;
    fin >> c;
    fin >> n >> m;
    int nr_max_a = 0, div_max_a = 0;
    int nr_max_b = 0, div_max_b = 0;
    for(int i = 1; i <= n; i++){
        fin >> a[i].nr;
        a[i].nrdiv = desc(a[i].nr);
        if(a[i].nrdiv > div_max_a)
            div_max_a = a[i].nrdiv;
        if(a[i].nrdiv == div_max_a && a[i].nr > nr_max_a)
            nr_max_a = a[i].nr;
    }
    for(int i = 1; i <= m; i++){
        fin >> b[i].nr;
        b[i].nrdiv = desc(b[i].nr);
        if(b[i].nrdiv > div_max_b)
            div_max_b = b[i].nrdiv;
        if(b[i].nrdiv == div_max_b && b[i].nr > nr_max_b)
            nr_max_b = b[i].nr;
    }
    if(c == 1){
        if(div_max_a == div_max_b)
            fout << max(nr_max_a, nr_max_b);
        else{
            if(div_max_a > div_max_b)
                fout << nr_max_a;
            else   
                fout << nr_max_b;
        }
    }
    else{
        for(int i = 1; i <= n; i++){
            freca[a[i].nrdiv]++;
        }
        for(int i = 1; i <= m; i++){
            frecb[b[i].nrdiv]++;
        }
        int sum = 0;
        if(div_max_a > div_max_b)
            swap(div_max_a, div_max_b);
        for(int i = 1; i <= div_max_a; i++){
            sum += (freca[i]*frecb[i]);
        }
        fout << sum;
    }
}
