1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        vector<string>copyStr;
5        string sortStr="";
6        copyStr=strs;
7        unordered_map<string,vector<string>>map;
8        for(int i=0 ;i<strs.size();i++){
9            string s = copyStr[i];
10            sort(s.begin(), s.end());
11            sortStr =s;
12            map[sortStr].push_back(strs[i]);
13        }
14        vector<vector<string>>result;
15        for(auto p:map){
16            result.push_back(p.second);
17        }
18        return result;
19    }
20};
21
22/*Main Logic of Your Code
23
24Goal: Group strings that are anagrams of each other.
25
26Use a map:
27
28Key → sorted version of a string.
29
30Value → list of original strings that match this sorted key.
31
32Process each string:
33
34Sort the characters in the string.
35
36Use the sorted string as the key in the map.
37
38Add the original string to the vector corresponding to that key.
39
40Collect results:
41
42Iterate over all entries in the map.
43
44Add each vector of grouped anagrams to the final result.
45
46Return the result:
47
48The result is a vector of vectors, where each inner vector contains strings that are anagrams of each other.*/