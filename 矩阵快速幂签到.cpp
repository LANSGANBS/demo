#include <iostream>
#include <vector>
using namespace std;

const int mod = 998244353;

struct Matrix {
    vector<vector<int>> a;
    int n, m;

    Matrix(int n, int m) : n(n), m(m) {
        a.resize(n, vector<int>(m));
    }

    Matrix operator*(const Matrix& other) const {
        Matrix res(n, other.m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < other.m; j++) {
                for (int k = 0; k < m; k++) {
                    res.a[i][j] = (res.a[i][j] + 1LL * a[i][k] * other.a[k][j]) % mod;
                }
            }
        }
        return res;
    }
};

Matrix pow(Matrix a, int b) {
    Matrix res(a.n, a.n);
    for (int i = 0; i < a.n; i++) {
        res.a[i][i] = 1;
    }
    while (b) {
        if (b & 1) {
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }
    Matrix a(2, 2);
    a.a[0][0] = 2;
    a.a[0][1] = 1;
    a.a[1][0] = 2;
    a.a[1][1] = 0;
    Matrix b = pow(a, n - 1);
    cout << (2LL * b.a[0][0]) % mod << endl;
    return 0;
}