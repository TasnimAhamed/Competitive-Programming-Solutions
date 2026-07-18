#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 5;

vector<vector<int>> cnt(N, vector<int> (10, 0));
void pre() {

	auto isSingle = [&] (auto self, int n){
		if (n < 10) {
			return n;
		}

		int prod = 1;
		while (n > 0) {
			int rem = n % 10;
			if (rem) {
				prod *= rem;
			}
			n /= 10;
		}

		return self(self, prod);
	};

	for (int i = 1; i < N; i++) {
		int si = isSingle(isSingle, i);
		cnt[i][si]++;
	}

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < N; j++) {
			cnt[j][i] += cnt[j - 1][i];
		}
	}

}


void solve() {
    int l, r, k; cin >> l >> r >> k;

    cout << cnt[r][k] - cnt[l - 1][k] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    pre();

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}