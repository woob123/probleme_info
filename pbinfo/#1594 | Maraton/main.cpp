#include<fstream>
using namespace std;
ifstream cin("maraton.in");
ofstream cout("maraton.out");
int secunde[100001];
int main(){
    int n,d,v,t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d>>v;
        t=d/v +(d%v>0);
        secunde[t]++;

    }
    for(int i=1;i<=100000;i++){
        secunde[i]+=secunde[i-1];
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d;
        cout<<secunde[d]<<'\n';
    }
}
