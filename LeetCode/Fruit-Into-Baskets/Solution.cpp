1class Solution {
2public:
3    int totalFruit(vector<int>& fruits) {
4        unordered_map<int,int> map; 
5        int maxLen = 0;
6        int left = 0;
7
8        for(int right = 0; right < fruits.size(); right++) {
9            map[fruits[right]]++;
10            while(map.size() > 2) {
11                map[fruits[left]]--;
12                if(map[fruits[left]] == 0) {
13                    map.erase(fruits[left]);
14                }
15                left++;
16            }
17            maxLen = max(maxLen, right - left + 1);
18        }
19
20        return maxLen;
21    }
22};
23