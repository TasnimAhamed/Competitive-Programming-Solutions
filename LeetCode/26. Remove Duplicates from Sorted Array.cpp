class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int nxt = 0;    
        int n = nums.size();
        nums.push_back(-500);
        if( n == 0 or n == 1) return n;
        for(int i = 0; i < n; i++){
            if( nums[i] != nums[i+1]){
                nums[nxt++] = nums[i];
            }
        }
        return nxt;
    }
};