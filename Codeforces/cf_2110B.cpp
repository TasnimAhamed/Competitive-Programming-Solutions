#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s; cin >> s;
    int ans = 0, lol = 0;
    stack<char> st;
    for(auto ch : s){
        if(st.empty() and ans != 0){
            lol = 1;
            break;
        }
        else{
            if(ch == '('){
                st.push(ch);
            }
            else{
                st.pop();
                if(st.empty()){
                    ++ans;
                }
            }
        }
    }

    if(lol){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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


