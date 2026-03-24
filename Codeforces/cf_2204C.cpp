#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, c, m;
    cin >> a >> b >> c >> m;

 	auto lcm = [&] (ll a, ll b) {
		return a / __gcd(a, b) * b;
 	};

    ll A = m / a;
    ll B = m / b;
    ll C = m / c;

    ll ab = lcm(a,b);
    ll ac = lcm(a,c);
    ll bc = lcm(b,c);

    ll AB = m / ab;
    ll AC = m / ac;
    ll BC = m / bc;

    ll abc = lcm(ab, c);
    ll ABC = m / abc;

    ll o_A = A - AB - AC + ABC;
    ll o_B = B - AB - BC + ABC;
    ll o_C = C - AC - BC + ABC;

    ll o_AB = AB - ABC;
    ll o_AC = AC - ABC;
    ll o_BC = BC - ABC;

    ll res1 = 6 * o_A + 3 * o_AB + 3 * o_AC + 2 * ABC;
    ll res2 = 6 * o_B + 3 * o_AB + 3 * o_BC + 2 * ABC;
    ll res3 = 6 * o_C + 3 * o_AC + 3 * o_BC + 2 * ABC;

    cout << res1 << " " << res2 << " " << res3 << "\n";
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