#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s; cin >> s;
	int n = s.size();

	if(n == 1 ) {
		if(s[0] == '^') {
			cout << 1 << "\n";
		}
		else {
			cout << 2 << "\n";
		}
		return;
	}

	int cnt = 0, i = 0, len = -1;
	
	string ans = "";
	if(s[i] == '_') {
		++cnt;
		ans += '^';
		++len;
	}
	else {
		ans += s[i];
		++len;
		++i;
	}
	while (i < n) {
		if(ans[len] == '^' and s[i] == '^') {
			++i;
		}
		else if(ans[len] == '^' and s[i] == '_') {
			if(i + 1 < n and s[i + 1] == '^') {
				i += 2;
			}
			else{
				++cnt;
				++i;
			}
		}
		else{
			++i;
		}
	}

	
    cout << cnt << "\n";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}