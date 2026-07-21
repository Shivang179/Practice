class Solution {
public:
    long long multiply(long long a, long long b) {
        long long ans = 0;

        while (b > 0) {
            if (b & 1)
                ans += a;

            a <<= 1;
            b >>= 1;
        }

        return ans;
    }

    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long num = llabs((long long)dividend);
        long long den = llabs((long long)divisor);

        long long low = 0;
        long long high = num;
        long long ans = 0;

        while (low <= high) {

            long long mid = low + (high - low) / 2;

            if (multiply(mid, den) <= num) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if ((dividend < 0) ^ (divisor < 0))
            ans = -ans;

        return (int)ans;
    }
};