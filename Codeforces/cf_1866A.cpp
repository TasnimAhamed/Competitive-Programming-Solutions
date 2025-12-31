#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v){
        cin >> x;
        x = abs(x);
    }
    int mn = *min_element(v.begin(), v.end());

    cout << mn << "\n";

    return 0;

}
