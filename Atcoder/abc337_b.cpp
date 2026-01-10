#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    string cpy = s;
    sort(s.begin(), s.end());

    if(s == cpy) cout << "Yes\n";
    else cout << "No\n";

//    if(is_sorted(s.begin(), s.end())) cout << "Yes\n";
//    else cout << "No\n";

    return 0;

}
