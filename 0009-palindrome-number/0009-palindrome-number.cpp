class Solution {
public:
    bool isPalindrome(int x) {
if(x<0) return false;
        int old_num = x;
        long long ans = 0;
        
            
        while (x != 0 &&x>0) {
            int digit = x % 10;
            ans = ans * 10 + digit;
            x /= 10;
        }
    /*    if(ans>INT_MAX || ans<INT_MIN || x < 0) return false;   */

        if (ans == old_num)
            return true;

            return false;
    }
};