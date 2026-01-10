#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<int> s;
    for(int i = 1; i<=9; i++){
        for(int j = 1; j <= 9; j++){
            s.insert(i *j);
        }
    }

    int n; cin >> n;

    if(s.find(n) == s.end()) cout << "No\n";
    else cout << "Yes";

    return 0;

}
