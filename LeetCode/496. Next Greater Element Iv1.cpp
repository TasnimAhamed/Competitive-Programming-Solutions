// Monotonic Stack - Next Greater Element
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        stack<int> st;
        for(int i = nums2.size()-1; i >= 0; i--){
            while(!st.empty() && nums2[i] > st.top()){
                st.pop();
            }
            result.insert(result.begin(), (st.empty() ? -1 : st.top()));
            st.push(nums2[i]);
        }
        map<int, int> mp;
        for(int i = 0; i < nums2.size(); i++){
            mp[nums2[i]] = result[i];
        }
        result.clear();
        for(int i = 0; i < nums1.size(); i++){
            result.push_back(mp[nums1[i]]);
        }

        return result;
    }
};