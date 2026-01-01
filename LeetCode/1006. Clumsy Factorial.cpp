class Solution {
public:
    int clumsy(int n) {
        int ans = n, i = 0, neg = 0, negVal = 0;

        vector<char> sign{'*', '/', '+', '-'};

        while(--n){
            // cout << "ans: "<< ans
            //      << " sign: " << sign[i]
            //      << " neg: "<< negVal
            //      << " n: "<< n << '\n';

            if( sign[i] == '*'){
                if(neg) negVal*=n;
                else ans *= n;
            }
            else if( sign[i]  == '/'){
                if( neg ) negVal /= n;
                else ans /= n;
            }
            else if( sign[i]  == '+'){
                ans = ans - negVal + n;
                negVal = 0;
            }
            else{
                neg = 1;
                negVal = n;
            }

            ++i;

            if( i == sign.size()) i = 0;
            
        }

        if( negVal ) ans -= negVal;

        //cout << "Final ans : " << ans << '\n';

        return ans;
    }
};