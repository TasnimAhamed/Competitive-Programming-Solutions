class Solution {
public:
    int signFunc(int x) {
        return x / abs(x);
    }
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for (auto num : nums) {
            if(num == 0 ) {
                return 0;
            }
            ans *= signFunc(num);
        }
        return ans;
    }
};