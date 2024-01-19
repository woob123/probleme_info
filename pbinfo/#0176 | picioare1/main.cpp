#include <iostream>
using namespace std;

int main()
{
    float C, P;
    cin >> C >> P;
    float O = (-C * 2 + P) / 2;
    float G = C - O;
    cout << G << " " << O;
}
