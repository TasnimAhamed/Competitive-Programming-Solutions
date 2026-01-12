#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e7 + 5;
int cnt[N];
bool isPerfectSquare(int mean) {
    int sq = sqrt(mean);

    while(sq * sq < mean) ++sq;
    while(sq * sq > mean) --sq;

    return sq * sq == mean;
}

void preCompute() {
    for (int m = 2; m * m < N; m++) {
        for (int n = 1; n < m; n++) {
            int gcd = __gcd(m, n);
            if (gcd > 1) {
                continue;
            }
            if (m % 2 == n % 2) {
                continue;
            }

            int a = m * m - n * n;
            int b = 2 * m * n;
            int c = m * m + n * n;

            if( c >= N) {
                break;
            }

            int sum = (c  + min(a, b));
            if (sum & 1) {
                continue;
            }
            sum /= 2;
            if(!isPerfectSquare(sum)) {
                continue;
            }
            cnt[c] += 1;
        }
    }

    for (int i = 1; i < N; i++) {
        cnt[i] += cnt[i - 1];
    }
}

void solve() {
    int n; cin >> n;
    cout << cnt[n] << "\n";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    preCompute();

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
