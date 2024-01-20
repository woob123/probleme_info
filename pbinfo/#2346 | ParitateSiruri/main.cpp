#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;
ifstream cin("paritatesiruri.in");
ofstream cout("paritatesiruri.out");
int main(){
    char a[20000];
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a;
        int j = 1;
        while(a[j]){
            if(j%2==1)
                cout << a[j];
            j++;
        }
        cout << " ";
        j = 0;
        while(a[j]){
            if(j%2==0)
                cout << a[j];
            j++;
        }
        cout << endl;
    }
}
