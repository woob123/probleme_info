#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n, m, k = 0, p = 0;
    int a[100001], b[100001], c[200001], d[100001];
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

    for(int l = 1; l <= k; l++)
        cout << c[l] << " ";
        cout << endl;

    i = 1, j = 1;
    while(i <= n && j <= m)
        if(a[i] == b[j])
            d[++p] = a[i], i++, j++;
        else
            if(a[i] < b[j])
                i++;
            else
                j++;

    for(int l = 1; l <= p; l++)
        cout << d[l] << " ";

}
