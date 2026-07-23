class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            // If opening bracket, push into stack
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            // If closing bracket
            else {
                if (st.empty())
                    return false;

                char top = st.top();

                if ((s[i] == ')' && top != '(') ||
                    (s[i] == '}' && top != '{') ||
                    (s[i] == ']' && top != '[')) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};