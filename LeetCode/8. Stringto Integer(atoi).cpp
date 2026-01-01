class Solution {
public:
    int myAtoi(string s) {
        long long int ans = 0, neg = 0;
        int n = s.size(), st = 0 ;

        while(s[st] == ' ') ++st;

        if( s[st] == '-' and st < n){
            ++neg;
            ++st;
        }
        else if( s[st] == '+' and st < n) ++st;

        if( !(s[st] >= '0' and s[st] <='9')) return 0;

        while(st < n && (s[st] >= '0' and s[st] <= '9')){

            if( ans > INT_MAX/10 or (ans == INT_MAX/10 and s[st] >= '8')){
                return INT_MAX;
            }
            else if( ans < INT_MIN/10 or (ans == INT_MIN/10 and s[st] == '9')){
                return INT_MIN;
            }
            
            if(neg){
                ans = ans * 10 - (s[st] - '0');
            }
            else{
                ans = ans * 10 + (s[st] - '0');
            }
            ++st;
        }
        return ans;

    }
};