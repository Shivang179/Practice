class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length=0;
        for(int i=0;i<s.size();i++){
                vector<int> freq(256, 0);
                for(int j=i;j<s.size();j++){
                    if(freq[s[j]]==1)
                    break;
                    freq[s[j]]++;
                length=max(length,j-i+1);
                   }
             
        }
    return length;
    }
};