class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            // Push opening brackets
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }
            // For closing brackets
            else {
                if (st.empty()) return false;  // No matching opening
                char top = st.top();
                if ((ch == ')' && top != '(') ||
                    (ch == ']' && top != '[') ||
                    (ch == '}' && top != '{')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();  // All brackets must be closed
    }
};
