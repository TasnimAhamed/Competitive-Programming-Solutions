#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int get_num(string s) {
	int num = 0;
	for (int i = 0; i < s.size();  i++) {
		if (s[i] != '0') {
			num = num * 10 + (s[i] - '0');
		}
	}

	return num;
}

void solve() {
	int a, b; cin >> a >> b;
	int c = a + b;
	int aa = get_num(to_string(a));
	int bb = get_num(to_string(b));
	int cc = get_num(to_string(c));

	cerr << aa << " " << bb << " " << cc << '\n';
	
	if((aa + bb) == cc) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}