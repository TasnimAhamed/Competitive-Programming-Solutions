// Binary Search -> Lower Bound and Upper Bound
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int st = lower_bound(nums.begin(), nums.end(), target) - nums.begin();  
        int en = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

        if(st == en) return {};

        vector<int> ans;
        for(int i = st; i < en ; i++){
            ans.push_back(i);
        }

        return ans;
        
        
        return {};
    }
};