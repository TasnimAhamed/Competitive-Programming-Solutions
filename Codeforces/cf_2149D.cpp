#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	string s; cin >> s;

	vector<ll> pref_a(n + 1, 0), pref_cnt_a(n + 1, 0);
	vector<ll> suff_a(n + 1, 0), suff_cnt_a(n + 1, 0);

	pref_cnt_a[0] = (s[0] == 'a');
	for (int i = 1; i < n; i++) {
		pref_a[i] = pref_a[i - 1];
		pref_cnt_a[i]= pref_cnt_a[i - 1];

		if (s[i] == 'a') {
			pref_cnt_a[i]++;	
		}
		else {
			pref_a[i] += pref_cnt_a[i];
		} 
	}

	suff_cnt_a[n - 1] = (s[n - 1] == 'a');
	for (int i = n - 2; i >= 0; i--) {
		suff_a[i] = suff_a[i + 1];
		suff_cnt_a[i] = suff_cnt_a[i + 1];

		if (s[i] == 'a') {
			suff_cnt_a[i]++;
		}
		else {
			suff_a[i] += suff_cnt_a[i];
		}
	}

	vector<ll> pref_b(n + 1, 0), pref_cnt_b(n + 1, 0);
	vector<ll> suff_b(n + 1, 0), suff_cnt_b(n + 1, 0);

	pref_cnt_b[0] = (s[0] == 'b');
	for (int i = 1; i < n; i++) {
		pref_b[i] = pref_b[i - 1];
		pref_cnt_b[i]= pref_cnt_b[i - 1];

		if (s[i] == 'b') {
			pref_cnt_b[i]++;	
		}
		else {
			pref_b[i] += pref_cnt_b[i];
		} 
	}

	suff_cnt_b[n - 1] = (s[n - 1] == 'b');
	for (int i = n - 2; i >= 0; i--) {
		suff_b[i] = suff_b[i + 1];
		suff_cnt_b[i] = suff_cnt_b[i + 1];

		if (s[i] == 'b') {
			suff_cnt_b[i]++;
		}
		else {
			suff_b[i] += suff_cnt_b[i];
		}
	}


	ll mn = LLONG_MAX;
	for (int i = 0; i < n; i++) {
		mn = min({mn, pref_a[i] + suff_a[i], pref_b[i] + suff_b[i]});
	}

	cout << mn << "\n";

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