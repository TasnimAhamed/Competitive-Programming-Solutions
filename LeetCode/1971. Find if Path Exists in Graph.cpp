#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e5 + 9;
vector<int> g[N];
bool visited[N];

bool dfs(int source, int destination){
    if(source == destination) return true;

    visited[source] = true;
    // cout << source << ' ';
    for(auto u : g[source]){
        if(!visited[u]){
            bool paisi = dfs(u, destination);
            if(paisi) return true;
        }
    }

    return false;
}

void solve(){
    int n; cin >> n;
    for (int i = 0; i < n;i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int source, destination;
    cin >> source >> destination;

    cout << boolalpha << dfs(source, destination) << '\n';

}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;

}