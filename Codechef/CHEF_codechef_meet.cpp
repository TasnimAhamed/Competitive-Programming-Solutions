#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int convert_time(int h, int m, string t) {
	if(t == "AM") {
		if(h == 12) {
			h = 0;
		}
	}
	else{
		if(h != 12) {
			h += 12;
		}
	}

	int min = h * 60 + m;
	return min;
}


void solve() {
    int m_h, m_m;
    char m_ch;
    string m_t;
    cin >> m_h >> m_ch >> m_m >> m_t;

    int m_min = convert_time(m_h, m_m, m_t);
    
    vector<pair<int, int>> time;
    int n; cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
    	int s_h, s_m, e_h, e_m;
	    char s_ch, e_ch;
	    string s_t, e_t;

	    cin >> s_h >> s_ch >> s_m >> s_t;
    	int s_min = convert_time(s_h, s_m, s_t);

    	cin >> e_h >> e_ch >> e_m >> e_t;	
    	int e_min = convert_time(e_h, e_m, e_t);
    	time.push_back({s_min, e_min});
    }
    string ans = "";
    for (auto [s, e] : time) {
    	if(m_min >= s and m_min <= e) {
    		ans += "1";
    	}
    	else{
    		ans += "0";
    	}
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--){
        solve();
    }

    return 0;
}