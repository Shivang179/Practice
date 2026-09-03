class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min = *min_element(nums1.begin(), nums1.end());
        bool canBeOdd = true;
        bool canBeEven = true;
        for (int x : nums1) {
            bool odd = (x % 2 == 1);
            bool even = (x % 2 == 0);
            bool possibleOdd = odd;
            bool possibleEven = even;
            if (x != min) {
                possibleOdd |= ((x - min) % 2 == 1);
                possibleEven |= ((x - min) % 2 == 0);
            }
            canBeOdd &= possibleOdd;
            canBeEven &= possibleEven;
        }
        return canBeOdd || canBeEven;
    }
};