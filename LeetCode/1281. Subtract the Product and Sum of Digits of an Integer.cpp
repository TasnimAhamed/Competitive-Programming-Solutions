class Solution {
public:
    int subtractProductAndSum(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);  
        int sum = 0, mul = 1;

        while(n > 0){
            int rem  = n%10;
            mul *= rem;
            sum += rem;
            n/=10;
        }

        return (mul - sum);
    }
};