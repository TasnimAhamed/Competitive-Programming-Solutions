#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll n) {
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void solve() {
    ll d;
    cin >> d;
    ll ff = 1, ss = ff + d;
    while (!isPrime(ss)) {
        ++ss;
    }
    ll tt = ss + d;
    while (!isPrime(tt)) {
        ++tt;
    }
    ll last = ff * ss * tt;
    // cout << ff << " " << ss << " " << tt << "\n";

    cout << last << "\n";
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