class Solution {
public:
    int countDigits(int num) {
        int tmp = num, ans = 0;
        while(tmp > 0) {
            int rem = tmp % 10;
            tmp /= 10;
            if(num % rem == 0) {
                ++ans;
            }
        }
        return ans;
    }
};