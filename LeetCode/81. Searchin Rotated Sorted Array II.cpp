class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int st = 0, en = nums.size() - 1;

        while(st <= en){
            if(nums[st] == target or nums[en] == target) return true;
            if(target < nums[en]) --en;
            else ++st;
        }

        return false;
    }
};