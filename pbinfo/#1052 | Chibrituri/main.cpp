#include <bits/stdc++.h>

using namespace std;

ifstream fin("chibrituri.in");
ofstream fout("chibrituri.out");

int vert[] = { 4, 2, 2, 2, 3, 2, 3, 2, 4, 3 };
int hor[] = { 2, 0, 3, 3, 1, 3, 3, 1, 3, 3 };

struct hmin {
    int h1, h2, m1, m2;
};

hmin calc(int h) {
    return hmin{
        h / 60 / 10,
        h / 60 % 10,
        h % 60 / 10,
        h % 60 % 10
    };
}

pair<int, int> nec(hmin* h) {
    return make_pair(hor[h->h1] + hor[h->h2] + hor[h->m1] + hor[h->m2], vert[h->h1] + vert[h->h2] + vert[h->m1] + vert[h->m2]);
}

int main(){
    int m, n;
    fin>>n>>m;
    int am = 0, mn = -1, mx = 0;
    for (int i = 0; i <= 1439; i++) {
        hmin h = calc(i);
        auto necb = nec(&h);
        if (necb.first == m && necb.second == n) {
            am++;
            if (mn == -1) mn = i;
            mx = i;
        }
    }
    fout<<am<<'\n';
    hmin hmn = calc(mn), hmx = calc(mx);
    fout<<hmn.h1<<hmn.h2<<':'<<hmn.m1<<hmn.m2<<'\n';
    fout<<hmx.h1<<hmx.h2<<':'<<hmx.m1<<hmx.m2<<'\n';
}
