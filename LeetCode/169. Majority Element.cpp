class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = ceil(nums.size() / 2.0);
        map<int, int> mp;
        
        for(auto num : nums){
            mp[num]++;
        }

        for(auto pr : mp){
            if( sz <= pr.second ) return pr.first;
        }

        return 0;
    }
};


/*
    Easy Solution: s**kss

    class Solution {
    public:
        int majorityElement(vector<int>& nums) {

            sort(nums.begin(), nums.end());
            return nums[nums.size()/2];
            
        }
    };
    
*/