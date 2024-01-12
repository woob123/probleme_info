#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int v[2000002];

int main() {
    ifstream fin("arhitectura2.in");
    ofstream fout("arhitectura2.out");
    int n, nr;
    fin >> n;
    v[0] = 0;
    v[n+1] = 0;
    for(int i = 1; i <= n; i++) {
        fin >> v[i];
    }
    sort(v + 1,  v + n + 1, greater<int>()); // sortare descrescatoare
    for(int i = 1; i <= n; i++)
        fout << v[i] << " ";
    fout << endl;
    for(int i = 1; i <= n; i++) 
        if(2 * v[i] == v[i-1] + v[i+1])
            fout << 1 << " ";
        else
            fout << 0 << " ";
}
