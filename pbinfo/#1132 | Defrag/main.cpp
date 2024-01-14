#include <iostream>
#include <fstream>
#define pmax 101
#define smax 361
using namespace std;
ifstream fin("defrag.in");
ofstream fout("defrag.out");
short hdd[pmax][2*smax];
int main(){
    int v,c,np,ns,xp,xs,i,j,k,po,min,s,nso;
    fin>>v>>np>>ns;
    fin>>c;
    for(i=1;i<=c;i++){
        fin>>xp>>xs;
        hdd[xp][xs]=1;
        hdd[xp][xs+ns]=1;
        hdd[xp][0]++;
    }
    if(v==1){
    po=0;
    for(i=1;i<=np;i++)
        if (hdd[i][0]) po++;
    fout<<np-po;
    }
    if(v==2){
    for(i=1;i<=np;i++){
        min=ns;nso=hdd[i][0];
            for(j=1;j<=ns;j++){
                s=0;
                for(k=j;k<j+nso;k++)
                    if (hdd[i][k]==0) 
                        s++;
                if (s<min) 
                    min=s;
            }
            fout<<min<<" ";
        }
    }
    fout<<"\n";
    fin.close();
    fout.close();
    return 0;
}
