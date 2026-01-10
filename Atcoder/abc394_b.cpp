#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;cin >> n;
    vector<string> v(n);

    for(auto &s : v) cin >> s;

    auto f = [](const string& a, const string& b) -> bool {
        return a.size() < b.size();
    };

    sort(v.begin(), v.end(), f);
    string ans;
    for(auto s : v) ans += s;

    cout << ans << en;

    return 0;

}
