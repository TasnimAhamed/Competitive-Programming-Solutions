#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll lim = 1LL << 32;
void solve() {
	
	int n; cin >> n;
	ll add = 1, x = 0;
	stack<ll> st;
	st.push(add);
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s == "for") {
			int nn; cin >> nn;
			ll top = st.top() * nn;
			top = min(lim, top);
			st.push(top);
		}
		else if(s == "end") {
			st.pop();
		}
		else {
			x += st.top();
		}
	}

	if(x >= lim)  {
		cout << "OVERFLOW!!!\n";
	}
	else {
		cout << x << "\n";
	}
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}