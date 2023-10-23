#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    vector<int> merged(n + m);
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), merged.begin());

    for (int i = 0; i < n + m; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
