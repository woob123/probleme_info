#include<fstream>
using namespace std;
long a[100001];
int main(){
    long long i,n,s,max=0,q=0;
    ifstream fin("deal.in");
    ofstream fout("deal.out");
    fin>>n;
    for(i=1;i<=n;i++){
        fin>>s;a[s]++;
        if (a[s]>n/2)q=s;
        if(s>max)max=s;
    }
    i=max;
    s=0;
    if(q==0)
        n=n/2;
    else
        if (a[q]-n/2>1)
            n=n-a[q]+1;
        else
            n=n-a[q];
    while(n>a[i]){
        s+=i*a[i];
        n=n-a[i];i--;
    }
    s+=i*n;
    fout<<s;
fout.close();
fin.close();
}
