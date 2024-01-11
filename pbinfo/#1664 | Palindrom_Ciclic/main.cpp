#include <iostream>
#include <fstream>
using namespace std;

ifstream in("palindrom_ciclic.in");
ofstream out("palindrom_ciclic.out");
long long v[1000], n;
bool palindrom = false;
int trials;

void read() {
    in>>n;
    for(int i=0; i<n; i++)
        in>>v[i];
}

bool verif() {
    for(int i=0; i<n; i++)
        if(v[i] != v[n-1-i])
            return false;
    palindrom = true;
    return true;
}

void perm() {
    long long first = v[0];
    for(int i=0; i<n-1; i++)
        v[i] = v[i+1];
    v[n-1] = first;
    trials += 1;
}

void solve() {
    while(!verif() && trials<n) {
        perm();
    }
    if(palindrom)
        out<<"DA "<<trials;
    else
        out<<"NU";
}

int main() {
    read();
    solve();
}
