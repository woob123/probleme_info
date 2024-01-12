#include <iostream>

using namespace std;

int prim(int n){
    if(n == 0 || n ==1)
        return 0;
    if(n == 2 || n == 3)
        return 1;
    int i=2;
    while(i*i<=n){
        if(n%i==0)
            return 0;
        i++;
    }
    return 1;
}
int main(){
    unsigned int n,i,nr,nr_prime[10000],k=1,aux,bec;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>nr;
        if(prim(nr))
            nr_prime[k++]=nr;
    }
    k--;

    do{
        bec=0;
        for(i=1; i<k; i++)
            if(nr_prime[i]>nr_prime[i+1]){
                aux=nr_prime[i];
                nr_prime[i] = nr_prime[i+1];
                nr_prime[i+1] = aux;
                bec = 1;
            }
    }
    while(bec);



    for(i=1; i<=k; i++)
        cout<<nr_prime[i]<<" ";
}
