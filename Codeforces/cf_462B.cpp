#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> idx(26, 0);
    for (auto ch : s) {
    	idx[ch - 'A']++;
    }
    
    sort(idx.rbegin(), idx.rend());
    ll mx_sc = 0;
    for (auto val : idx) {
    	if (k == 0) {
    		break;
    	}
    	val = min(val, k);
    	mx_sc += 1LL * val * val;
    	k -= val;
    }

    cout << mx_sc << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}