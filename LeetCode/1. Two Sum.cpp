class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n  = nums.size();
        int st = 0;
        vector<int> ans;
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]] = i;
        }
        while(st < n){
            int rem = target - nums[st];
            if(mp.count(rem) &&  mp[rem] != st){
                ans.push_back(st);
                ans.push_back(mp[rem]);
                break;
            }
            ++st;
        }
        return ans;
    }
};