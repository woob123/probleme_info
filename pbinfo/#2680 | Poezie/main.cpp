#include <iostream>
#include <cstring>
using namespace std;
char s[256],t[256];
int n,i,j,nr;
int main(){
    cin>>n;
    for(i=0; i<=n; i++){
        cin.getline (s,256);
        for(j=strlen(s)-2;j>=0;j--){
            if(!isalpha(s[j])&&s[j]!=32){
                strcpy(t,s+j+1);
                strcpy(s+j,t);
            }
            nr++;
        }
        if(nr)
        cout<<s<<endl;
    }
    return 0;
}
