// Next Greater Element Circular - Right to left
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        int n = v.size();
        vector<int> result(n, -1);
        stack<int> st;
        for(int i = 2*n - 1; i >= 0; i--){
            while(!st.empty() and st.top() <= v[i%n]){
                st.pop();
            }
            if(st.empty()){
                result[i%n] = -1;
            }
            else{
                result[i%n] = st.top();
            }
            st.push(v[i%n]);
        }

        return result;
    }
};