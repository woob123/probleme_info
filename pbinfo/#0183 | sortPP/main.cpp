#include <iostream>
#include <cmath>
using namespace std;

int n,a[1005];

int pp(int x){
    return (int)sqrt((double)x) == sqrt((double)x);
}

int main(){
    cin >> n;
    for(int i=1;i<=n;++i)
        cin >> a[i];
    for(int i=1;i<=n;++i)
        if(pp(a[i]))
            for(int j=i+1;j<=n;++j)
                if(pp(a[j]))
                    if(a[i]>a[j]){
                        int aux = a[i];
                        a[i] = a[j];
                        a[j] = aux;
                    }
    for(int i=1;i<=n;++i)
        cout << a[i] << " ";
    return 0;
}
