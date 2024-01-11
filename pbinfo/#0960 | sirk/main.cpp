#include <iostream>
using namespace std;
int main(){
    int k, i, j;
    cin >> k;

    j = 2;
    for (i = 1; i + j < k; i += j, j += 2);
    int NR = 1;
    for (; i != k && NR != (j+2)/2; ++i)
        NR++;
    for (; i != k; ++i)
        NR--;
    cout << NR;
    return 0;
}
