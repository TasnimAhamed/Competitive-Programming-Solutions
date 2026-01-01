class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx  = INT_MIN, n = nums.size();
        int prei = 1, sufi = 1;
        for(int  i = 0; i < n; i++){
            prei *= nums[i];
            sufi *= nums[n-i-1];
            mx = max(mx, max(prei, sufi));
            if(prei == 0) prei = 1;
            if(sufi == 0) sufi = 1;
        }

        return mx;
    }
};