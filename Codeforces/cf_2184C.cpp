#include<bits/stdc++.h>
using namespace std;
using ll = long long;


map<ll, ll> checked;

ll getCnt(ll x, ll k) {
    
    if (x == k) {
    	return 0;
    }
    if (x < k) {
    	return -1;
    }
  
    if (checked.count(x)) {
    	return checked[x];
    }

    ll a = x / 2;
    ll b = x - a;

    ll res1 = getCnt(a, k);
    ll res2 = getCnt(b, k);

    ll res = -1;
    if (res1 == -1 && res2 == -1) {
        res = -1;
    } 
    else if (res1 == -1) {
        res = 1 + res2;
    }
    else if (res2 == -1) {
        res = 1 + res1;
    } 
    else {
        res = 1 + min(res1, res2);
    }

    return checked[x] = res;
}



void solve() {
	checked.clear();
    ll n, k;  cin >> n >> k;
    cout << getCnt(n, k) << "\n";
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