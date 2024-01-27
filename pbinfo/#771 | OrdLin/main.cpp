#include <iostream>
using namespace std;
int main(){
    int a[101][101], n, m, i, j, g, h;
    cin>>n>>m;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin>>a[i][j];    
    for(g=0; g<n-1; g++)
        for(h=g+1; h<n; h++){
            int s1=0, s2=0;
            for(j=0; j<m; j++){
                s1 += a[g][j];
                s2 += a[h][j];
            }
            if(s2 < s1)
                for(j=0; j<m; j++)
                    swap(a[g][j], a[h][j]);
        }    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
