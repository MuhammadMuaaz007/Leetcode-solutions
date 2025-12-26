1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4
5        vector<unordered_set<char>> rows(9);
6        vector<unordered_set<char>> cols(9);
7        map<pair<int,int>, unordered_set<char>> boxes;
8
9        for (int i = 0; i < 9; i++) {
10            for (int j = 0; j < 9; j++) {
11
12                if (board[i][j] == '.') continue;
13
14                char val = board[i][j];
15                pair<int,int> boxKey = { i / 3, j / 3 };
16
17                // row check
18                if (rows[i].count(val)) return false;
19
20                // column check
21                if (cols[j].count(val)) return false;
22
23                // box check
24                if (boxes[boxKey].count(val)) return false;
25
26                // insert value
27                rows[i].insert(val);
28                cols[j].insert(val);
29                boxes[boxKey].insert(val);
30            }
31        }
32
33        return true;
34    }
35};
36
37/*vector<unordered_set<char>> rows(9) – This creates 9 sets, one for each row. Each set stores the numbers already present in that row. Using a set allows O(1) lookup to quickly see if a number has already appeared in that row.
38
39vector<unordered_set<char>> cols(9) – Similarly, this creates 9 sets, one for each column. Each set keeps track of numbers in that column, allowing fast duplicate checks.
40
41map<pair<int,int>, unordered_set<char>> boxes – Sudoku has 9 sub-boxes (3×3). We use a map with a key (i/3, j/3) to uniquely identify each box, and the associated set stores the numbers already present in that box. This ensures that no number is repeated inside any 3×3 sub-grid.*/
42
43
44
45// class Solution {
46// public:
47//     // validate a 3x3 box
48//     bool validBox(vector<vector<char>>& board, int sr, int er, int sc, int ec) {
49//         unordered_set<char> st;
50//         for (int i = sr; i <= er; i++) {
51//             for (int j = sc; j <= ec; j++) {
52//                 if (board[i][j] == '.') continue;
53//                 if (st.find(board[i][j]) != st.end()) {
54//                     return false;
55//                 }
56//                 st.insert(board[i][j]);
57//             }
58//         }
59//         return true;
60//     }
61
62//     bool isValidSudoku(vector<vector<char>>& board) {
63//         // validate rows
64//         for (int row = 0; row < 9; row++) {
65//             unordered_set<char> st;
66//             for (int col = 0; col < 9; col++) {
67//                 if (board[row][col] == '.') continue;
68//                 if (st.find(board[row][col]) != st.end()) {
69//                     return false;
70//                 }
71//                 st.insert(board[row][col]);
72//             }
73//         }
74
75//         // validate columns
76//         for (int col = 0; col < 9; col++) {
77//             unordered_set<char> st;
78//             for (int row = 0; row < 9; row++) {
79//                 if (board[row][col] == '.') continue;
80//                 if (st.find(board[row][col]) != st.end()) {
81//                     return false;
82//                 }
83//                 st.insert(board[row][col]);
84//             }
85//         }
86
87//         // validate 3x3 boxes
88//         for (int sr = 0; sr < 9; sr += 3) {
89//             for (int sc = 0; sc < 9; sc += 3) {
90//                 int er = sr + 2;
91//                 int ec = sc + 2;
92//                 if (!validBox(board, sr, er, sc, ec)) {
93//                     return false;
94//                 }
95//             }
96//         }
97
98//         return true;
99//     }
100// };
101