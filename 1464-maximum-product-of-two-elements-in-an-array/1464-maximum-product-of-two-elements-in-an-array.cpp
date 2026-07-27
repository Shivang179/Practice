class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mul;    
        sort(nums.begin(),nums.end());
        int i=nums.size();
    mul=(nums[i-1]-1)*(nums[i-2]-1);
        
        return mul;
    }
};