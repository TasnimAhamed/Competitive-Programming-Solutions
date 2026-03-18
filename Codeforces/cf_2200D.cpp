#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
 
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    auto isOK = [&](vector<int> &v) {
        int n = v.size();
        if (n == 0) return 0;
        vector<int> b = v;
        b.insert(b.end(), v.begin(), v.end());
        int i = 0, j = 1, k = 0;
        while (i < n && j < n && k < n) {
            int diff = b[i + k] - b[j + k];
            if (diff == 0) {
                k++;
            } 
            else {
                if (diff > 0) {
                	i += k + 1;
                }
                else {
                	j += k + 1;
                }
                if (i == j) {
                	j++;
                }
                k = 0;
            }
        }
        return min(i, j);
    };

    if (x == 0 && y == n) {
        int st = isOK(v);
        for (int i = 0; i < n; i++) {
            cout << v[(st + i) % n] << (i == n - 1 ? "\n" : " ");
        }
        return;
    }

  
    vector<int> mid_ele;
    for (int i = x; i < y; i++) {
        mid_ele.push_back(v[i]);
    }

    deque<int> outer_ele;
    for (int i = 0; i < x; i++) {
        outer_ele.push_back(v[i]);
    }
    for (int i = y; i < n; i++) {
        outer_ele.push_back(v[i]);
    }

    // for (auto x : outer_ele) {
    // 	cout << x << " ";
    // }
    // cout << "\n";

    int st = isOK(mid_ele);
    vector<int> best_mid;
    for (int i = 0; i < (int)mid_ele.size(); i++) {
        best_mid.push_back(mid_ele[(st + i) % mid_ele.size()]);
    }

    vector<int> res;
    bool inserted = false;

    while (!outer_ele.empty()) {
        if (!inserted && !best_mid.empty() && best_mid[0] < outer_ele.front()) {
            for (auto val : best_mid) {
            	res.push_back(val);
            }
            inserted = true;
        } 
        else {
            res.push_back(outer_ele.front());
            outer_ele.pop_front();
        }
    }

    if (!inserted) {
        for (auto val : best_mid) {
        	res.push_back(val);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << (i == n - 1 ? "\n" : " ");
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}