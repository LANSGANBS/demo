#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;

    for (int i = 0; i < n; i++) {
        int step;
        cin >> step;

        if (step == 1) {
            int x;
            cin >> x;
            s.push(x);
        } else if (step == 2) {
            if (!s.empty()) {
                cout << s.top() << endl;
            }
        } else if (step == 3) {
            if (!s.empty()) {
                s.pop();
            }
        } else if (step == 4) {
            cout << s.size() << endl;
        }
    }

    return 0;
}
