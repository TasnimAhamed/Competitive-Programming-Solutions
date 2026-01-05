class Solution {
public:

    int get_sum(int n) {
        return n * (n + 1) / 2;
    }

    int sumOfMultiples(int n) {
        // Inclusion - Exclusion
        int ans = get_sum(n / 3) * 3 + get_sum(n / 5) * 5 + get_sum(n / 7) * 7;
        ans -= get_sum(n / 15) * 15;
        ans -= get_sum(n / 21) * 21;
        ans -= get_sum(n / 35) * 35;
        ans += get_sum(n / 105) * 105;

        return ans;
    }
};