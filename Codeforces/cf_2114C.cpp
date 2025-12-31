#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    stack<int> st;
    for(auto x : v){
        if(st.empty()){
            st.push(x);
        }
        else{
            int top = st.top();
            if(top == x or (top+1) == x){
                continue;
            }
            else{
                st.push(x);
            }
        }
    }
    cout << st.size() << "\n";
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

