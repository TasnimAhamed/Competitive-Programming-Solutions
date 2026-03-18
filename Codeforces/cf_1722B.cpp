#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < n; i++) {
		if((a[i] == 'R' and a[i] != b[i]) or (b[i] == 'R' and a[i] != b[i])) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}