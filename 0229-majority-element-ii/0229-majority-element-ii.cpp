class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int s = nums.size();
        for (int i = 0; i < s; i++) {
            hash[nums[i]]++;
        }
            vector<int> ans;
        for (auto [num, freq] : hash) {
            if (freq > s / 3) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};