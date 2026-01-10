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
        if(s[i] == '(' or s[i] == '<' or s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(!st.empty()){
                if(s[i] == ')' and st.top() == '('){
                    st.pop();
                }
                else if(s[i] == ']' and st.top() == '['){
                    st.pop();
                }
                else if(s[i] == '>' and st.top() == '<'){
                    st.pop();
                }
                else{
                    cout << "No\n";
                    return 0;
                }

            }
            else{
                cout << "No\n";
                return 0;
            }
        }
    }

    if(st.empty()){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }




    return 0;

}
