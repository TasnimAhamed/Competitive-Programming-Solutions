class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[2];
        
        if((a + b) > c and (b + c) > a and (a + c) > b) {
            if(a == b and b == c) {
                return "equilateral";
            }
            else if(a == b or b == c or c == a) {
                return "isosceles";
            }
            return "scalene";
        }
        return "none";
    }
};