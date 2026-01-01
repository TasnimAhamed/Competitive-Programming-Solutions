class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int nxt = 0, cnt  = 1;
        int n = nums.size();
        nums[nxt++] = nums[0]; 
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1] and cnt < 2){
                nums[nxt++] = nums[i];
                ++cnt;
            }
            else if( nums[i] == nums[i-1] and cnt >=2){
                ++cnt;
            }
            else{
                nums[nxt++] = nums[i];
                cnt = 1;
            }
        }

        return nxt;

    }
};