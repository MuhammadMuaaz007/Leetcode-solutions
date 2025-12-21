class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string word = "";
        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                if (word == "" || word == ".") {
                    // do nothing
                }
                else if (word == "..") {
                    if (!st.empty())
                        st.pop();
                }
                else {
                    st.push(word);
                }
                word = ""; // reset for next folder
            }
            else {
                word += path[i];
            }
        }
        // build result
        string result = "";
        while (!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }

        return result == "" ? "/" : result;
    }
};
