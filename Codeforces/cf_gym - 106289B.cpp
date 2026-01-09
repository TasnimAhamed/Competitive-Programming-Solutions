#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> v(n), cnt(n + 1, 2);
    int paisi = -1;
    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    	cnt[v[i]]--;
    	
    	if(i and v[i] == v[0]) {
    		paisi = i;
    	}
    }
    
    if(paisi == -1) {
    	cnt[v[0]]--;
    	cout << 0 << "\n";
    	for (int i = 1; i <= n; i++) {
    		while(cnt[i]--) {
    			cout << i << " ";
    		}
    	}
    	cout << v[0] << "\n";
    	return;
    }

    vector<int> ans;
    int k = 0;
    for (int i = 1; i <= n; i++) {
    	if(k == 0 and cnt[i] == 2) {
    		k = i;
    		cnt[i] = 0;
    	}
    	while(cnt[i]--) {
    		ans.push_back(i);
    	}
    }

    cout << 1 << "\n";
    for (int i = 0; i < n - 1; i++) {
    	if(paisi != i and !ans.empty()) {
    		cout << ans.back() << " ";
    		ans.pop_back();
    	}
    	else {
    		cout << k << " ";
    	}
    }

    cout << k << "\n";



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