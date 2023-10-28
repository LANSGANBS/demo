#include <iostream>
#include <vector>
using namespace std;

const int maxn = 505;
bool vis[maxn];
vector<int> primes;

void init() {
    for (int i = 2; i < maxn; i++) {
        if (!vis[i]) {
            primes.push_back(i);
        }
        for (int j = 0; j < primes.size() && i * primes[j] < maxn; j++) {
            vis[i * primes[j]] = true;
            if (i % primes[j] == 0) {
                break;
            }
        }
    }
}

bool check(int x, int y) {
    for (int i = 0; i < primes.size() && primes[i] * primes[i] <= x && primes[i] * primes[i] <= y; i++) {
        if (x % primes[i] == 0 && y % primes[i] == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    init();
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    bool alice = true;
    while (!a.empty() && !b.empty()) {
        bool flag = false;
        if (alice) {
            for (int i = 0; i < a.size(); i++) {
                for (int j = 0; j < b.size(); j++) {
                    if (!check(a[i], b[j])) {
                        a.erase(a.begin() + i);
                        b.erase(b.begin() + j);
                        flag = true;
                        break;
                    }
                }
                if (flag) {
                    break;
                }
            }
        } else {
            for (int i = 0; i < b.size(); i++) {
                for (int j = 0; j < a.size(); j++) {
                    if (!check(b[i], a[j])) {
                        b.erase(b.begin() + i);
                        a.erase(a.begin() + j);
                        flag = true;
                        break;
                    }
                }
                if (flag) {
                    break;
                }
            }
        }
        alice = !alice;
    }
    if (a.empty()) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
    return 0;
}