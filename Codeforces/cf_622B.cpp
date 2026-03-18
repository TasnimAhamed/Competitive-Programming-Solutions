#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	char ch;
    int hh, mm; cin >> hh >> ch >> mm;
    int a; cin >> a;
    
    int time = hh * 60 + mm + a;

    hh = (time / 60) % 24;
    mm = time % 60;

    cout << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}