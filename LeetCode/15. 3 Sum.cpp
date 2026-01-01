class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n; i++){
            
            int j = i+1, k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if( sum == 0){
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if( sum > 0 ){
                    --k;
                }
                else{
                    ++j;
                }
            }
        }

        for(auto x : s){
            ans.push_back(x);
        }

        return ans;

    }
};

/*
    A Little Optimize

    class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n; i++){
            if( i > 0 and nums[i] == nums[i-1]) continue;

            int j = i+1, k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if( sum == 0){
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j < k and nums[j] == nums[j - 1]) ++j;
                    while(j < k and nums[k] == nums[k + 1]) --k;
                }
                else if( sum > 0 ){
                    --k;
                }
                else{
                    ++j;
                }
            }
        }

        for(auto x : s){
            ans.push_back(x);
        }

        return ans;

    }
};


*/