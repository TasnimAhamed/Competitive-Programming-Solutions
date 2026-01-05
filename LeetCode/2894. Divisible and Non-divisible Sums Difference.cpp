class Solution {
public:
    int get_sum (int n) {
        return n * (n + 1) / 2;
    }
    int differenceOfSums(int n, int m) {
        int total_sum = get_sum(n);
        int num2 = get_sum(n / m) * m;
        
        return total_sum - 2 * num2;
    }
};