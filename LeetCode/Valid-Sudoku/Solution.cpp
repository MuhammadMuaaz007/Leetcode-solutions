1class Solution {
2public:
3    // validate a 3x3 box
4    bool validBox(vector<vector<char>>& board, int sr, int er, int sc, int ec) {
5        unordered_set<char> st;
6        for (int i = sr; i <= er; i++) {
7            for (int j = sc; j <= ec; j++) {
8                if (board[i][j] == '.') continue;
9                if (st.find(board[i][j]) != st.end()) {
10                    return false;
11                }
12                st.insert(board[i][j]);
13            }
14        }
15        return true;
16    }
17
18    bool isValidSudoku(vector<vector<char>>& board) {
19        // validate rows
20        for (int row = 0; row < 9; row++) {
21            unordered_set<char> st;
22            for (int col = 0; col < 9; col++) {
23                if (board[row][col] == '.') continue;
24                if (st.find(board[row][col]) != st.end()) {
25                    return false;
26                }
27                st.insert(board[row][col]);
28            }
29        }
30
31        // validate columns
32        for (int col = 0; col < 9; col++) {
33            unordered_set<char> st;
34            for (int row = 0; row < 9; row++) {
35                if (board[row][col] == '.') continue;
36                if (st.find(board[row][col]) != st.end()) {
37                    return false;
38                }
39                st.insert(board[row][col]);
40            }
41        }
42
43        // validate 3x3 boxes
44        for (int sr = 0; sr < 9; sr += 3) {
45            for (int sc = 0; sc < 9; sc += 3) {
46                int er = sr + 2;
47                int ec = sc + 2;
48                if (!validBox(board, sr, er, sc, ec)) {
49                    return false;
50                }
51            }
52        }
53
54        return true;
55    }
56};
57