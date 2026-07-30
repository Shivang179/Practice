class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int ans;
        if (n <= 8)
            ans = n;

        if (n > 8 && n <= 16)
            ans = (n - 8) * 2 + 8;

        if (n > 16 && n <= 24)
            ans = 24 + (n - 16) * 3;

        if (n > 24 && n <= 26)
            ans = 48 + (n - 24) * 4;
        return ans;
    }
};