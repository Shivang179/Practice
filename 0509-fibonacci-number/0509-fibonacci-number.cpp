class Solution {
public:
    int fib(int n) {
        if (n<2){
            return n;
        }
        vector<int> nums(n + 1);
            nums[0] = 0; // can only be assigned
            nums[1] = 1;
        for (int i = 2; i <= n; i++) {
            nums[i] = nums[i - 1] + nums[i - 2];
        }
        return nums[n];
    }
};