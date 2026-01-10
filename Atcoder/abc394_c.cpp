#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    stack<char> st;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if(ch == 'A' and !st.empty() and st.top() == 'W'){
            int cnt = 0;
            while(!st.empty() and st.top() == 'W'){
                ++cnt;
                st.pop();
            }
            st.push(ch);
            while(cnt--){
                st.push('C');
            }
        }
        else{
            st.push(ch);
        }
    }

    string ans;
    while(!st.empty()){
        char ch = st.top();
        st.pop();
        ans += ch;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";


    return 0;

}
