// Getting TLE using Substaction Method
class Solution {
public:
    int divide(int dividend, int divisor) {
        if( dividend == INT_MIN and divisor == -1 ) return INT_MAX;

        long long qoutient = 0;

        int sign = (dividend < 0 ) ^ (divisor < 0 ) ? -1 : 1;

        long long n = abs(dividend);
        long long m = abs(divisor);

        while(n - m >= 0){
            n -= m;
            ++qoutient;
        }

        return int(qoutient*sign);
    }
};

// Optimal Solution using Bit Manipulation

// 1. 

class Solution {
public:
    int divide(int dividend, int divisor) {
        if( dividend == INT_MIN and divisor == -1 ) return INT_MAX;

        long long qoutient = 0;

        int sign = (dividend < 0 ) ^ (divisor < 0 ) ? -1 : 1;

        long long n = abs(dividend);
        long long m = abs(divisor);

        while(n >= m){
            int cnt = 0;

            while(n - (m << 1 << cnt) >=0){
                ++cnt;
            }
            qoutient += 1 << cnt;
            n -= m << cnt;
        }

        return int(qoutient*sign);
    }
};

// 2.

class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend == divisor ) return 1;
        
        int sign = (dividend < 0 == divisor < 0 );

        unsigned int qoutient = 0;
        unsigned int n = abs(dividend);
        unsigned int m = abs(divisor);

        while(n >= m){

            int cnt = 0;

            while( n > (m << (cnt+1))){
                ++cnt;
            }
            qoutient += (1 << cnt);
            n -= (m << cnt);
        }

        if( qoutient == (1<<31) and sign) return INT_MAX;

        return sign ? qoutient : -qoutient;
    }
};