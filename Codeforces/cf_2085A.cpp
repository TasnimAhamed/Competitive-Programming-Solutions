#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    if(k == 0)
    {
        string rev = s;
        reverse(rev.begin(), rev.end());
        cout << (s < rev ? "yes" : "no") << endl;
        return;
    }

    bool ok = false;
    for(int i = 1; i < n; i++)
    {
        if(s[i] != s[i - 1])
        {
            ok = true;
            break;
        }
    }

    if(!ok)
    {
        cout << "no" << endl;
        return;
    }

    if(k >= 1 && ok)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;

}

