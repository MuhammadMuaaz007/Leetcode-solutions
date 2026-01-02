1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        sort(people.begin(),people.end());
5        int left=0; int right=people.size()-1; int boats=0;
6        while(left<=right){
7            if(people[left]+people[right]<=limit){
8                left++;
9            }
10            right--;
11            boats++;
12        }
13        return boats;
14    }
15};
16
17
18
19// class Solution {
20// public:
21//     int numRescueBoats(vector<int>& people, int limit) {
22//         sort(people.begin(),people.end());
23//         int left=0; int right=people.size()-1; int boats=0;
24//         while(left<=right){
25//             if(people[left]+people[right]<=limit){
26//                 boats++;
27//                 left++;
28//                 right--;
29//                 continue;
30//             }else{
31//             right--;
32//             }
33//             boats++;
34//         }
35//         return boats;
36//     }
37// };