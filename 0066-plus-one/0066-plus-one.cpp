/*class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long num = 0;
        for (int i = 0; i < digits.size(); i++) {
            num = num * 10 + digits[i];
        }
        num++;
        vector<int> ans;

        while (num > 0) {
            ans.push_back(num % 10);
            num /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string s = "";

        // convert digits to string
        for (int i = 0; i < digits.size(); i++) {
            s += (digits[i] + '0');
        }

        // add 1 manually
        int carry = 1;

        for (int i = s.size() - 1; i >= 0; i--) {
            int sum = (s[i] - '0') + carry;
            s[i] = (sum % 10) + '0';
            carry = sum / 10;
        }

        if (carry) {
            s = '1' + s;
        }

        // convert back to vector
        vector<int> ans;

        for (int i = 0; i < s.size(); i++) {
            ans.push_back(s[i] - '0');
        }

        return ans;
    }
};