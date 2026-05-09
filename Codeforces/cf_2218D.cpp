#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 10;
vector<bool> isPrime(N);
vector<int> primes;

void sieve() {    
    isPrime[0] = isPrime[1] = true;
    for (int i = 2; i * i < N; i++) {
        if (!isPrime[i]) {
            for (int j = i * i; j < N; j += i)
                isPrime[j] = true;
        }
    }
    
    for (int i = 2; i < N; i++) {
        if (!isPrime[i]) {
             primes.push_back(i);
        }
    }
  
}

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);

    v[0] = primes[0];
    for (int i = 1; i < n; i++) {
        v[i] = 1LL * primes[i - 1] * primes[i];
    }

    // set<ll> s;
    // for (int i = 0; i < n - 1; i++) {
    //  int gcd = __gcd(v[i], v[i + 1]);
    //     s.insert(gcd);
    // }
    // cout << s.size() << "\n";

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    // cout << primes.size() << "\n";

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
