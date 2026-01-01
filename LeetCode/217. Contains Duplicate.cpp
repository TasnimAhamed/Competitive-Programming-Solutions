class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;

        for(auto num : nums){
            mp[num]++;
        }

        for(auto pr : mp){
            if( pr.second >= 2) return true;
        }

        return false;
    }
};