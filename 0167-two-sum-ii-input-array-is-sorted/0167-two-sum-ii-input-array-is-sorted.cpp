class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int start=0;
        int last=nums.size()-1;

            while(start<last){
                if(nums[start]+nums[last]==target) return {start+1,last+1};

                if(nums[start]+nums[last]<target) start++;

                else last--;
            }
    return {};
    }
};