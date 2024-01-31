#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin ("partitura.in");
ofstream fout ("partitura.out");
int n,k,p;
struct nota{
    long long x,y;
};
int cmp(nota a,nota b){
    if (a.x==b.x)
        return a.y < b.y;
    return a.x < b.x;
}
nota a[300001],b[300001],v[300001];
int main(){
    fin >> n;
    for (int i=1;i<=n;i++)
        fin >> v[i].x >> v[i].y;
    sort (v+1,v+n+1,cmp);
    for (int j=18;j>=1;j--){
        k = 0;
        for (int i=n;i>1;i-=2){
            if (v[i].x==j && v[i-1].x==j){
                a[++k].x=v[i].x-1;
                a[k].y=v[i].y+v[i-1].y;
                n-=2;
            }
        }
        p=0;
        int c=1,c2=k;
        while (c<=n && c2>=1)
            if (v[c].x < a[c2].x ||(v[c].x==a[c2].x && v[c].y < a[c2].y))
                b[++p]=v[c++];
            else
                b[++p]=a[c2--];
        while (c<=n)
            b[++p]=v[c++];
        while (c2>=1)
            b[++p]=a[c2--];
        for (int i=1;i<=p;i++)
            v[i]=b[i];
        n=p;
    }
    long long score = 0;
    for(int i = 1; i <= n; i ++){
        score += v[i].y * v[i].y;
    }
    fout << score;
    return 0;
}
