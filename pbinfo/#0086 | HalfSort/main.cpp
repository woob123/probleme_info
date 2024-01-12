#include <fstream>
using namespace std;

ifstream cin("halfsort.in");
ofstream cout("halfsort.out");

int main(){
    int n;
    cin >> n;
    int v[1001];
    for(int i = 1; i <= n; i++)
        cin >> v[i];

    for(int i = 1; i <= n/2; i++)
        for(int j = i + 1; j <= n/2; j++)
        if(v[i] > v[j]){
            int aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }

    for(int i = n/2+1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
        if(v[i] < v[j]){
            int aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }

    for(int i = 1; i <= n; i++)
        cout << v[i] << " ";
}
