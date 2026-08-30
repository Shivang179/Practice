class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int n = nums.size();

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        int minL = n, minR = -1;
        int maxL = n, maxR = -1;

        for(int i = 0; i < n; i++) {

            if(nums[i] == mn) {
                minL = min(minL, i);
                minR = max(minR, i);
            }

            if(nums[i] == mx) {
                maxL = min(maxL, i);
                maxR = max(maxR, i);
            }
        }

        // Try all useful combinations of positions
        int ans = n;

        vector<int> mins = {minL, minR};
        vector<int> maxs = {maxL, maxR};

        for(int i : mins) {
            for(int j : maxs) {

                int left = min(i, j);
                int right = max(i, j);

                int option1 = right + 1;          // remove from left
                int option2 = n - left;           // remove from right
                int option3 = left + 1 + n - right; // both sides

                ans = min(ans, min({option1, option2, option3}));
            }
        }

        return ans;
    }
};