1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string merged;
5        int ptr1=0;
6        int ptr2=0;
7        int n1 = word1.size();
8        int n2 = word2.size();
9        for(int i=0 ; ptr1 < n1 || ptr2 < n2; i++){
10           if(ptr1<n1){
11            merged+=word1[ptr1];
12            ptr1++;
13           }if(ptr2<n2){
14            merged+=word2[ptr2];
15            ptr2++;
16           }
17        }
18        return merged;
19    }
20};