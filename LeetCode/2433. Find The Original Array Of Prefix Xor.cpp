class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(i == 0) ans.push_back(pref[i]);
            else ans.push_back((pref[i] ^ pref[i-1]));
        }

        return ans;
    }
};