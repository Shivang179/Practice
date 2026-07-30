class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i+1]<nums[i])
              return i;
        }
      return 0;
    }
};