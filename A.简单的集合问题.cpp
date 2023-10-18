#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        vector<int> mins(k), maxs(k);
        for(int i = 0; i < k; i++) {
            int n;
            cin >> n;
            vector<int> nums(n);
            for(int j = 0; j < n; j++) {
                cin >> nums[j];
            }
            mins[i] = *min_element(nums.begin(), nums.end());
            maxs[i] = *max_element(nums.begin(), nums.end());
        }
        sort(mins.begin(), mins.end());
        sort(maxs.begin(), maxs.end());
        int res = maxs[0] - mins[0];
        for(int i = 1; i < k; i++) {
            res = min(res, maxs[i] - mins[i-1]);
        }
        cout << res << "\n";
    }

    return 0;
}
