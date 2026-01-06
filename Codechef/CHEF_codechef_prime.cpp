#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 10;

vector<int> isPrime(N, 0);
vector<int> primes;

void sieve() {
    isPrime[0] = isPrime[1] = 1;
    primes.push_back(2);
    for (int i = 4; i < N; i+=2) {
        isPrime[i] = 1;
    }

    for (int i = 3; i < N; i += 2) {
        if(!isPrime[i]) {
            for (ll j = 1LL * i * i; j < N; j += i) {
                isPrime[j] = 1;
            }
        }
    }

    for (int i  = 3; i < N; i += 2) {
        if(!isPrime[i]) {
            primes.push_back(i);
        }
    }

}


void solve() {
    int n;
    while(cin >> n && n){

    int paisi = 0;
       for (int i = 0; i < 100; i++) {
            int ff = primes[i];
            int lol = 0;
            for (int j = 0; j < 100; j++) {
                int ss = primes[j];
                ll rem = n - (1ll * ff * ff + 1LL * ss * ss * ss);
                if(rem <= 0) {
                    continue;
                }
                if(rem >= 2 and isPrime[rem] == 0) {
                    cout << rem << " " << ff << " " << ss << "\n";
                    lol = 1;
                    break;
                }
            }
            if(lol) {
                paisi = 1;
                break;
            }
       }
       if(!paisi) {
        cout << "0 0 0\n";
       }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}