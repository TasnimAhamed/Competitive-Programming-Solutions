#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    int cnt = count(s.begin(), s.end(), '2');

    string ans(cnt, '2');

    cout << ans << "\n";

    return 0;

}
