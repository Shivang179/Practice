class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long num = llabs((long long)dividend);
        long long den = llabs((long long)divisor);

        long long ans = 0;

        while (num >= den) {

            int shift = 0;

            while (num >= (den << (shift + 1))) {
                shift++;
            }

            ans += (1LL << shift);
            num -= (den << shift);
        }

        if ((dividend < 0) ^ (divisor < 0))
            ans = -ans;

        return (int)ans;
    }
};