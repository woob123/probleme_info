#include <fstream>
#include <vector>
#include <set>
#define cnc cout << nr_cifre(n)
using namespace std;
ifstream cin("aproape.in");
ofstream cout("aproape.out");

int nr_cifre(int n){
    int cnt = 0;
    if(n == 0){
        return 1;
    }
    while (n) {
        cnt++;
        n/=10;
    }
    return cnt;
}

int rebuild(vector<int>* cifs, int pos, int replacement) {
    int nr = 0;
    for (int i = 0; i < cifs->size(); i++) {
        nr *= 10;
        if (i == pos) nr += replacement;
        else nr += cifs->at(i);
    }
    return nr;
}

void diffs(int n, set<int>* diff) {
    vector<int> cifs(0);
    if (n == 0) {
        cifs.push_back(0);
    } else {
        while (n) {
            cifs.insert(cifs.begin(), n % 10);
            n/=10;
        }
    }
    for (int i = 0; i < cifs.size(); i++) {
        int cif = cifs[i];
        if (i == 0 && cif == 1 && cifs.size() > 1) {
            diff->insert(rebuild(&cifs, i, 2));
        } else if (cif == 0) {
            diff->insert(rebuild(&cifs, i, 1));
        } else if (cif == 9) {
            diff->insert(rebuild(&cifs, i, 8));
        } else {
            diff->insert(rebuild(&cifs, i, cif - 1));
            diff->insert(rebuild(&cifs, i, cif + 1));
        }
    }
}

int main(){
    short v;
    int n;
    cin>>v>>n;

    if (v == 1) {
        cnc;
    } else if (v == 2) {
        set<int> posibilities;
        diffs(n, &posibilities);
        cout<<posibilities.size();
    } else {
        set<int> posibilities, other;
        diffs(n, &posibilities);
        for (int pos : posibilities) {
            diffs(pos, &other);
        }
        cout<<other.size();
    }
}
