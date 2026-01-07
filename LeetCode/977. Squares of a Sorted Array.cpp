class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int sz = nums.size();
        int left = 0, right = sz - 1;

        vector<int> res(sz);
        for(int i = sz - 1; i >= 0; i--){
            if(abs(nums[left]) > abs(nums[right])){
                res[i] = nums[left] * nums[left];
                left++;
            }
            else{
                res[i] = nums[right] * nums[right];
                right--;
            }
        }

        return res;
    }
};