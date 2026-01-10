class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int n = digits.size();
        vector<int> ans;
        for (int i = n - 1; i >= 0; i--) {
            int nxt_digit = digits[i] + carry;
            carry = nxt_digit / 10;
            int digit = nxt_digit % 10;
            ans.push_back(digit);
        }
        if(carry) {
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};