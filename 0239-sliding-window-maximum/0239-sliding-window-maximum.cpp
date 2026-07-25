class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> arr;
        deque<int> dq;

        for (int i = 0; i < nums.size(); i++) {

            // Remove indices that are out of the current window
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Remove smaller elements from the back
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            // Push current index
            dq.push_back(i);

            // Store the answer once the first window is formed
            if (i >= k - 1) {
                arr.push_back(nums[dq.front()]);
            }
        }

        return arr;
    }
};