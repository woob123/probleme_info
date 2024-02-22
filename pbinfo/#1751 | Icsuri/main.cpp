#include <iostream>

using namespace std;

int main() {
    int n, elevi, i, j, nr, L, K, nedesen = 0;
    cin >> n >> elevi;
    bool a[n][n];
    bool i_k, j_k, IK, JK;
    int _i_k, _j_k, _IK, _JK;

    for (L = 0; L < n; ++L)
        for (K = 0; K < n; ++K)
            a[L][K] = false;

    for (L = 0; L < elevi; ++L) {
        cin >> i >> j >> nr;
        i--;
        j--;
        a[i][j] = true;
        for (K = 1; K <= nr; ++K) {
            _i_k = i - K;
            _j_k = j - K;
            _IK = i + K;
            _JK = j + K;
            i_k = (0 <= _i_k && _i_k < n);
            j_k = (0 <= _j_k && _j_k < n);
            IK = (0 <= _IK && _IK < n);
            JK = (0 <= _JK && _JK < n);

            if (i_k) {
                if (j_k) a[_i_k][_j_k] = true;
                if (JK) a[_i_k][_JK] = true;
            }
            if (IK) {
                if (j_k) a[_IK][_j_k] = true;
                if (JK) a[_IK][_JK] = true;
            }
        }
    }
    
    for (L = 0; L < n; ++L)
        for (K = 0; K < n; ++K)
            if (!a[L][K])
                nedesen++;

    cout << nedesen;
    return 0;
}
