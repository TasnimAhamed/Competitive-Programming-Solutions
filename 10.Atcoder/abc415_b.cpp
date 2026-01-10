#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s; cin >> s;
	vector<int> idx;
	for (int i = 0; i < s.size(); i++) {
		if(s[i] == '#') {
			idx.push_back(i+1);
		}
	}

	for(int i = 0; i < idx.size(); i+=2) {
		cout << idx[i] << "," << idx[i+1] << "\n";
	}
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}