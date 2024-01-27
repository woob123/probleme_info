#include <iostream>
#include <fstream>
using namespace std;

int krand = 0;
ifstream in("interclasare3.in");
ofstream out("interclasare3.out");
int rand(){
    krand+=1;
    if(krand%20==0){
        out<<endl;
        krand=0;
    }
}
int main(){
    long int n, m, x[100000], y[100000], i, j, k=0, aux, kx=0, ky=0;
    in>>n>>m;
    for(i=0; i<n; i++){
        in>>aux;
        if(aux%2==0)
            x[kx++]=aux;
    }
    for(i=0; i<m; i++){
        in>>aux;
        if(aux%2==0)
            y[ky++]=aux;
    }
    i = 0; j = ky-1;
    while(i<kx && j>=0){
        if(x[i]<y[j])
            out<<x[i++]<<" ";
        else
            out<<y[j--]<<" ";
        rand();
    }
    while(i<kx){
        out<<x[i++]<<" ";
        rand();
    }
    while(j>=0){
        out<<y[j--]<<" ";
        rand();
    }
}
