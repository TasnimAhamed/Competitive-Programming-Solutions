class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;

        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        // for(auto pr:mp){
        //     cout << pr.first << ' ' << pr.second << '\n';
        // }

        int count = 0;
        
        for(int i = 0; i < n; i++){
            count += (mp[nums[i]]-1);
            --mp[nums[i]];
        }

        return count;
    
    }
};