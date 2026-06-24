class Solution {
public:
    static const long long MOD = 1000000007;
    using Matrix = vector<vector<long long>>;
    Matrix multiply(const Matrix& A, const Matrix& B) {
        int n = A.size();
        Matrix C(n, vector<long long>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (A[i][k] == 0) continue;
                for (int j = 0; j < n; j++) {
                    if (B[k][j] == 0) continue;
                    C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
                }
            }
        }
        return C;
    }
    Matrix power(Matrix base, long long exp) {
        int n = base.size();
        Matrix result(n, vector<long long>(n, 0));
        for (int i = 0; i < n; i++) {
            result[i][i] = 1;
        }
        while (exp > 0) {
            if (exp & 1) {
                result = multiply(result, base);
            }
            base = multiply(base, base);
            exp >>= 1;
        }
        return result;
    }
    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;
        auto upId = [&](int v) {
            return v;
        };
        auto downId = [&](int v) {
            return m + v;
        };
        int states = 2 * m;
        Matrix T(states, vector<long long>(states, 0));
        for (int v = 0; v < m; v++) {
            for (int u = 0; u < v; u++) {
                T[downId(u)][upId(v)] = 1;
            }
            for (int u = v + 1; u < m; u++) {
                T[upId(u)][downId(v)] = 1;
            }
        }
        vector<long long> start(states, 0);
        for (int x = 0; x < m; x++) {
            for (int y = 0; y < m; y++) {

                if (x == y) continue;

                if (y > x) {
                    start[upId(y)]++;
                } else {
                    start[downId(y)]++;
                }
            }
        }
        Matrix P = power(T, n - 2);
        vector<long long> finalState(states, 0);
        for (int i = 0; i < states; i++) {
            for (int j = 0; j < states; j++) {
                finalState[j] =
                    (finalState[j] + start[i] * P[i][j]) % MOD;
            }
        }
        long long ans = 0;
        for (long long x : finalState) {
            ans = (ans + x) % MOD;
        }
        return (int)ans;
    }
};