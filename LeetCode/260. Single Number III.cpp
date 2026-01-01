class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> ans;

        for(auto num : nums){
            if(s.count(num) == 1){
                s.erase(num);
            }
            else{
                s.insert(num);
            }
        }
        for(auto num : s){
            ans.push_back(num);
        }
        return ans;
    }
};