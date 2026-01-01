class Solution {
public:
    int reverse(int x) {
        long long int rev = 0, temp = x;
        int mx = INT_MAX, mi = INT_MIN, neg = 0;

        if( x < 0){
            neg = 1;
            temp =(long long int)x * -1;
        }
        
        while(temp > 0){
            rev = rev * 10 + (temp%10);
            temp/=10;
        }
        
        if(rev > mx or rev < mi) return 0;

        return neg ? int(rev*-1) : int(rev);


    }
};