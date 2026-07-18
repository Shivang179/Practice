class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minimum=*min_element(nums.begin(),nums.end());
        int maximum=*max_element(nums.begin(),nums.end());
    
    int GCD=gcd(minimum,maximum);
    
    return GCD;
    }
};