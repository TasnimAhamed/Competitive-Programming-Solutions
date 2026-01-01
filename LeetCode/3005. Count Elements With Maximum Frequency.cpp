class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        
        for(auto x : nums){
            mp[x]++;
        }
        int mx = -1;
        
        for(auto pr : mp){
            mx = max(mx,pr.second);
        }
        
        int sum = 0;
        
        for(auto pr : mp){
            if(mx == pr.second) sum += mx;
        }
        
        return sum;
    }
};