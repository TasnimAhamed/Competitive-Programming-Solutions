class Solution {
public:
    int scoreOfParentheses(string s) {

        stack<int> st;

        string ans = "";

        for(auto ch : s){
            
            if(ch == '('){
                ans.push_back(ch);
                st.push(0);
            }
            else{
                ans.pop_back();

                if(st.top() == 0){
                    int top = st.top();
                    ++top;
                    st.pop();
                    st.push(top);
                }
                else{
                    int top = 0;
                    while(st.top() != 0 || st.empty()){
                        top += st.top();
                        st.pop();
                    }
                    //st.pop();
                    if(st.empty()){
                        st.push(top);
                    }
                    else{
                        top*=2;
                        st.pop();
                        st.push(top);
                    }
                }
            }
        }

        int res = 0;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }

        return res;

    }
};


/*

    Alternative Solution


*/

class Solution {
public:
    int scoreOfParentheses(string s) {

        int res = 0, cnt = 0;
        char prev = '(';

        for(auto ch  : s){
            if(ch == '(') ++cnt;
            else{
                --cnt;
                if(prev == '('){
                    res += 1 << cnt;
                }
            }
            prev = ch;
        }

        return res;

    }
};


