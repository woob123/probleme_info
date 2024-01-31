#include <fstream>
#include <cmath>
using namespace std;

ifstream cin("interclasare1.in");
ofstream cout("interclasare1.out");

int main(){
    int n, m, k = 0;
    int a[100001], b[100001], c[200001];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    for(int i = 1; i <= m; i++)
        cin >> b[i];

    int i = 1, j = 1;
    while(i <= n && j <= m)
        if(a[i] < b[j])
            c[++k] = a[i], i++;
        else
            if(a[i] > b[j])
                c[++k] = b[j], j++;
            else
                i++;


    while(i <= n)
        c[++k] = a[i], i++;
    while(j <= m)
        c[++k] = b[j], j++;

    for(int l = 1; l <= k; l++){
        cout << c[l] << " ";
        if(l%10 == 0)
            cout << endl;
    }
}
