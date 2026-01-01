class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x= 0;
        for(auto& num : nums){
            x ^= num;
        }

        return x;
    }
};


/*
    We can think of it as the following facts:-

    1. XOR of a number with itself is 0 => 3^3 = 0
    2. XOR of a number with 0 is the number itself = 3^0 = 3
    3. XOR is commutative so the order of numbers does not matter

    4^1 = 5;
    5^1 = 4;

*/