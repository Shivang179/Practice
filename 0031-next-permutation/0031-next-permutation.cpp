/*class Solution {
public:
    void nextPermutation(vector<int>& nums) {
int n=nums.size()-1;
     for(int i=1;i<n;i++){
        if(nums[i]<nums[i+1]) swap(nums[i],nums[i+1]);
     }
return ; 
    }
};*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        // Step 1: Find the pivot
        int low = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                low = i;
                break;
            }
        }
        // Step 2: If no pivot exists, reverse the entire array
        if (low == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        // Step 3: Find the first element from the right
        // that is greater than nums[low]
        for (int j = n - 1; j > low; j--) {
            if (nums[j] > nums[low]) {
                swap(nums[j], nums[low]);
                break;
            }
        }
        // Step 4: Reverse everything after the pivot
        reverse(nums.begin() + low + 1, nums.end());
    }
};