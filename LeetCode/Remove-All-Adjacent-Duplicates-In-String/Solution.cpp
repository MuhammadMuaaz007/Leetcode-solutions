
 class Solution {
 public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for(char c : s) {
            if(!st.empty() && st.top() == c) {
                st.pop();  // remove the duplicate
            } else {
                st.push(c);
            }
        }

        // Construct the result from stack
        string result = "";
        while(!st.empty()) {
            result = st.top() + result;  // prepend because stack is LIFO
            st.pop();
        }
        return result;
    }
 };
