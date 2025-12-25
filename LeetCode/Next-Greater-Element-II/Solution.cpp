1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(n,-1);
6        stack<int>st;
7        for(int i=2*n-1 ; i>=0 ; i--){
8            while(st.size()>0 && nums[st.top()]<=nums[i%n]){
9                st.pop();
10            }
11            ans[i%n]=st.empty() ? -1:nums[st.top()];
12            st.push(i%n);
13        }
14        return ans;
15    }
16};
17
18
19/*Why use double size (2*n - 1)?
20
21Because the array is circular.
22
23👉 In a circular array, after the last element, you go back to the first.
24
25Example:
26
27nums = [1, 2, 1]
28
29
30For the last 1, the next greater 2 is at the beginning.
31
32So every element must be able to see all other elements to its right, including the wrap-around part.
33
34How do we simulate circular behavior?
35
36We pretend the array exists twice:
37
38[1, 2, 1 | 1, 2, 1]
39
40
41To traverse this “imaginary array”, we loop:
42
432*n - 1 → 0
44
45
46That’s why we use double size.*/
47
48
49/*Why use % n?
50
51Because the real array size is still n.
52
53We are looping over an imaginary bigger range, but the actual elements live only here:
54
55indices: 0 → n-1
56
57
58So we convert fake indices into real ones using:
59
60i % n
61
62
63Example (n = 3):
64
65i	i % n
665	2
674	1
683	0
692	2
701	1
710	0
72
73➡ This makes the array behave circularly.*/