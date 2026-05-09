#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> st;
    for (auto& x : v) {
        cin >> x;
        st.insert(x);
    }
 
    int mx = 1;
    for (int m : st) {
        int cnt = 0;
        int curr_sum = 0, curr_zero = 0;
        int last_pos = 0;

        for (int i = 1; i <= n; i++) {
            int val = (v[i - 1] > m ? 1 : (v[i-1] < m ? -1 : 0));
            curr_sum += val;
            if (val == 0) {
                curr_zero++;
            }
            
            int len = i - last_pos;
            if (len & 1 && abs(curr_sum) < curr_zero) {
                cnt++;
                curr_sum = 0, curr_zero = 0;
                last_pos = i;
            }
        }
        if (last_pos == n) {
            mx = max(mx, cnt);
        }
    }
    cout << mx << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}