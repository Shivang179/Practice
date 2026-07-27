/*class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=i;j<n;j++){
            if(nums[j]==0) count++;
            if(nums[j]==k) break;
            int max=(max,j+1-1);
            }
        }
        return max;
    }
};   */
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int zeros = 0;
        int ans = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0)
                zeros++;
            while (zeros > k) {
                if (nums[left] == 0)
                    zeros--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
/*class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] == 0)
                    count++;
                if (count > k)
                    break;
                ans = max(ans, j - i + 1);
            }
        }
        return ans;
    }
};*/