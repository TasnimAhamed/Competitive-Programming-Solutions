// Next Greater Element Circular - left to right using index
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        int n = v.size();
        vector<int> result(n, -1);
        stack<int> st;
        for(int i = 0; i < 2 * n; i++){
            while(!st.empty() and v[st.top()] < v[i%n]){
                result[st.top()] = (v[i%n]);
                st.pop();
            }
            st.push(i%n);
        }

        return result;
    }
};