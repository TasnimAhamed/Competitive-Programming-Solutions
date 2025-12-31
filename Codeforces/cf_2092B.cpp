#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    string a, b;
    cin >> a >> b;
    for(int i = 1; i < n; i++){
        if(a[i] == '1' and b[i-1] == '0'){
            swap(b[i-1], a[i]);
        }
    }
    for(int i = 0; i < n-1; i++){
        if(a[i] == '1' and b[i+1] == '0'){
            swap(b[i+1], a[i]);
        }
    }
    for(int i = 0; i < n; i++){
        if(b[i] == '0' and ((i+2) < n and b[i+2] == '1') and ((i+1) < n and a[i+1] == '0')){
            swap(b[i], b[i+1]);
        }
    }

    for(int i = 1; i < n; i++){
        if(a[i] == '1' and b[i-1] == '0'){
            swap(b[i-1], a[i]);
        }
    }

    int cnt = count(a.begin(), a.end(), '0');
    if(cnt == a.size()) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

