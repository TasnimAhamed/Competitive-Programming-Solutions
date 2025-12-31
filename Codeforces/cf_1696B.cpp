#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if(x != 0) {
    		++cnt;
    	}
    	else{
    		if(cnt) {
    			++ans;
    			cnt = 0;
    		}
    	}
    }
    if(cnt) {
    	++ans;
    }

    if(ans > 2) {
    	cout << 2 << "\n";
    }
    else{
    	cout << ans << "\n";
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}