#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<string, int> mp;
    vector<string> words(n);
    for (auto& word : words) {
    	cin >> word;
    	mp[word]++;
    }
    int cnt = 0;
    for (auto [key, val] : mp) {
    	cnt += (val - 1);
    }
    for (auto& word : words) {
        if (mp[word] > 1) {
            for (int i = 0; i < 4; i++) {
                int paisi = 0;
                int d = word[i] - '0';
                string old_word = word;
                for (int k = 0; k < 10; k++) {
                    // cout << "k: " << k << "\n";
                    int dd = d + k;
                    dd %= 10;
                    word[i] = dd + '0';
                    // cout << dd << " " << word << "\n";
                    if (mp.count(word) == 0) {
                        mp[word]++;
                        mp[old_word]--;
                        paisi = 1;
                        break;
                    }
                }
                if (paisi) {                    
                    break;
                }
            }
        }
    }
    
    cout << cnt << "\n";
    for (auto word : words) {
    	cout << word << "\n";
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