#include <iostream>
#include <fstream>
using namespace std;
typedef unsigned long long int ull;
int main() {
    int n;
    cin >> n;
    int k = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++, k++) {
            if (k % 3 == 0)
                k++;
            cout << k * 2 << " ";
        }
        cout << endl;
    }
}
