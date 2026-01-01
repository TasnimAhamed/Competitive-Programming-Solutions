class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0 ) return false;

        long long int rev  = 0, tmp = x;

        while(tmp > 0){
            rev = rev * 10 + (tmp % 10);
            tmp /= 10;
        }

        if(rev == x) return true;

        return false;

    }
};
