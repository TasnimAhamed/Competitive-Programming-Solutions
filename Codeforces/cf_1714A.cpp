#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, h, m;
    cin >> n >> h >> m;
    int bed_time = h * 60 + m;
    vector<int> nxt, prev;
    for (int i = 0; i < n; i++) {
    	int hh, mm; cin >> hh >> mm;
    	int time = hh * 60 + mm;
    	if (time >= bed_time) {
    		nxt.push_back(time);
    	}
    	else {
    		prev.push_back(time);
    	}
    }
    sort(nxt.begin(), nxt.end());
    sort(prev.begin(), prev.end());

    if (nxt.size() > 0) {
    	int sleep_time = nxt[0] - bed_time;

	    int hh = sleep_time / 60;
	    int mm = sleep_time % 60;

	    cout << hh << " " << mm << "\n";
    }
    else {
    	int sleep_time = prev[0] - bed_time;
    	if (sleep_time < 0) {
    		sleep_time += 24 * 60;
    	}

	    int hh = sleep_time / 60;
	    int mm = sleep_time % 60;

	    cout << hh << " " << mm << "\n";
    }
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