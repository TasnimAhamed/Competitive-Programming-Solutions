#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 25;
int cnt[N];
bool isPerfectSquare(int x) {
 int sq = sqrt(x);

 while(sq * sq < x) ++sq;
 while(sq * sq > x) --sq;

 return sq * sq == x;
}

bool isValidTraingle(int a, int b, int c) {
 if((a + b) > c and (b + c) > a and (c + a) > b) {
  return true;
 }

 return false;
}


void preCompute() {
 for (int m = 1; m * m < N; m++) {
  for (int n = 1; n * n < N; n++) {
   int gcd = __gcd(m, n);
   if (gcd > 1 or m % 2 == n % 2) {
    continue;
   }

   int a = m * m - n * n;
   int b = 2 * m * n;
   int c = m * m + n * n;
   gcd = __gcd(a, __gcd(b, c));
   if (gcd > 1 or a < 0 or !isValidTraingle(a, b, c)) {
    continue;
   }

   int avg = (c  + a);
   if (avg&1) {
    continue;
   }
   avg /= 2;
   if(isPerfectSquare(avg)) {
    cnt[c] = 1;
    cout << m << " " << n << "\n";
    cout << a << " " << b << " " << c << "\n";
   }
  }
 }
 for (int i = 0; i < N; i++) {
  cout << i << " -> " << cnt[i] << "\n";
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