#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for (auto &x : v) {
    	cin >> x;
    }

    int ans = 0, cnt = 0;
    int i = 0, j = n - 1;
    int left_sum = 0, right_sum = 0, turn = 0;
    while (i <= j) {
		if (turn % 2 == 0) {
			left_sum += v[i];
			++cnt;
			++i;

			if (left_sum == right_sum) {
				ans = cnt;
			}

			while (left_sum < right_sum and i <= j) {
				left_sum += v[i];
				++cnt;
				if (left_sum == right_sum) {
					ans = cnt;
				}
				++i;
			}

			if (left_sum == right_sum) {
				ans = cnt;
			}

		}
		else {
			right_sum += v[j];
			--j;
			++cnt;

			if (left_sum == right_sum) {
				ans = cnt;
			}

			while (right_sum < left_sum and j >= i) {
				right_sum += v[j];
				++cnt;
				if (left_sum == right_sum) {
					ans = cnt;
				}
				--j;
			}
		}

		++turn;
    }

    cout << ans << "\n";
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