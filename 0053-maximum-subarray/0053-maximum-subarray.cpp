/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int highest=nums[0];
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                highest=max(sum,highest); }}}
        return highest;}};*/

    class Solution{
        public:
        int maxSubArray(vector<int>& nums){
            int maximum=INT_MIN;
            int sum=0;

            for(int i=0;i<nums.size();i++){
                sum+=nums[i];

           
                maximum=max(maximum,sum);

 if(sum<0) sum=0;
            }
            return maximum;
        }
    };