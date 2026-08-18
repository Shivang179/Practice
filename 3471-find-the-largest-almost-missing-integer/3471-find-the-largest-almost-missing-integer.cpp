class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        // Case 1: k == 1
        if (k == 1) {
            int ans = -1;

            for (int i = 0; i < n; i++) {
                int count = 0;

                for (int j = 0; j < n; j++) {
                    if (nums[i] == nums[j]) {
                        count++;
                    }
                }

                if (count == 1) {
                    ans = max(ans, nums[i]);
                }
            }

            return ans;
        }

        // Case 2: k == n
        if (k == n) {
            int ans = nums[0];

            for (int i = 1; i < n; i++) {
                ans = max(ans, nums[i]);
            }

            return ans;
        }

        // Case 3: 1 < k < n
        int ans = -1;

        // Check first element
        int count1 = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == nums[0]) {
                count1++;
            }
        }

        if (count1 == 1) {
            ans = max(ans, nums[0]);
        }

        // Check last element
        int count2 = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == nums[n - 1]) {
                count2++;
            }
        }

        if (count2 == 1) {
            ans = max(ans, nums[n - 1]);
        }

        return ans;
    }
};