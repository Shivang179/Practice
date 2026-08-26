class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i = 0;
        int j = 0;
        int count = 0;
        string ans = "";
        while (j < s.size()) {
            if (s[j] == '1')
                count++;
            while (count == k) {
                int len = j - i + 1;
                string curr = s.substr(i, len);
                if (ans == "" || len < ans.size() ||
                    (len == ans.size() && curr < ans)) {
                    ans = curr;
                }
                if (s[i] == '1')
                    count--;
                i++;
            }
            j++;
        }
        return ans;
    }
};