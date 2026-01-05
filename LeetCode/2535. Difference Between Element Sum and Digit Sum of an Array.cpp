class Solution {
public:
    int get_digit_sum(int n) {
        int sum = 0;
        while(n > 0){
            sum += (n % 10);
            n /= 10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        int digit_sum = 0;
        for (auto num : nums) {
            digit_sum += get_digit_sum(num);
        }

        return abs(total_sum - digit_sum);
    }
};