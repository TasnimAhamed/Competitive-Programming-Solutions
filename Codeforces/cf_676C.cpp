#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    vector<int> cnt(n, 0);
    for (int i = 0; i < n; i++) {
    	cnt[i] += ((s[i] == 'a' ? 1 : 0) +  (i == 0 ? 0 : cnt[i - 1]));
    }
    auto isOK = [&](int mid) -> bool {
    	for (int i = mid - 1; i < n; i++) {
    		int a = cnt[i] - ((i - mid) < 0 ? 0 : cnt[i - mid]);
    		int b = mid - a;
    		int mn = min(a, b);
    		if(mn <= k) return true;
    	}
    	return false;
    };

    int lo = 1, hi = n;
    while(lo <= hi) {
    	int mid = lo + (hi - lo) / 2;
    	if(isOK(mid)) {
    		lo = mid + 1;
    	}
    	else{
    		hi = mid - 1;
    	}
    }

    cout << hi << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}