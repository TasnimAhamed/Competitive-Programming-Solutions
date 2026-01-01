class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = -1e5;
        for(int i = 0; i < n; i++){
            if(i >  0 and nums[i] == nums[i-1]) continue;

            int st = i+1, en = n-1;
            while(st < en){
                int sum  = nums[i] + nums[st] + nums[en];
                
                if( abs(target - sum) < abs(target - ans) ){
                    ans = sum;
                }

                if(sum > target) --en;
                else ++st;
            }
        }

        return ans;        

    }
};