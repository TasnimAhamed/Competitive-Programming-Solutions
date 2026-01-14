#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<array<int, 4>> v;
    for (int i = 0; i < n; i++) {
    	int t, m, c; cin >> t >> m >> c;
    	v.push_back({t, m, c, i + 1});
    }

    sort(v.begin(), v.end());

    // for (auto [t, m, c, idx] : v) {
    // 	cout << t << " " << m << " " << c << " " << idx << "\n";
    // }

    vector<int> ans;
    deque<array<int, 3>> dq;


    for (auto [t, m, c, idx] : v) {
    	int time = t;
    	if(c == 0) {
    		dq.push_back({t, m, idx});
    	}
    	else{
    		while(!dq.empty()) {
    			auto [st, dur, curr_idx] = dq.front();
    			dq.pop_front();
    			int end = st + dur;
    			if(end > t) {
    				ans.push_back(curr_idx);
    				break;
    			}
    			else if(!dq.empty()) {
    				dq.front()[0] = max(dq.front()[0], end);
    			}
    		}

    		dq.push_front({t, m, idx});

    	}
    }

    cout << ans.size() << "\n";
    for (auto ai : ans) {
    	cout << ai << " ";
    }
    cout << "\n";

 

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