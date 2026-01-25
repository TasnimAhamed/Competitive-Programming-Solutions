#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v;
    set<int> st;
    int paisi = 0;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if(st.find(x) == st.end()) {
    		v.push_back(x);
    		st.insert(x);
    	}
    	if(x == 1) {
    		paisi = 1;
    	}
    }

    sort(v.begin(), v.end());

    vector<int> ms(n + 1, -1);
	queue<int> q;

	ms[1] = 0; 
	q.push(1);

	while (!q.empty()) {
	    int x = q.front();
	    // cout << "x: " << x << "\n";
	    q.pop();
	    for (int xx : v) {
	    	if(xx == 1) {
	    		continue;
	    	}
	        ll y = 1LL * x * xx;
	       	if (y > n)  {
	       		break;
	       	}
	        if (ms[y] == -1) {
	            ms[y] = ms[x] + 1;
	            q.push(y);
	        }
	    }
	}

	for (int i = 1; i <= n; i++) {
	    if(i == 1) {
	    	if (paisi) {
	    		cout << 1 << " ";
	    	}
	    	else {
	    		cout << -1 << " ";
	    	}
	    } 
	    else {
	    	cout <<  ms[i] << " ";
	    }
	}
	cout << "\n";

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