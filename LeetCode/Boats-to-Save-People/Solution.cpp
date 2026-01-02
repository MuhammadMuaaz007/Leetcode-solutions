1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        sort(people.begin(),people.end());
5        int left=0; int right=people.size()-1; int boats=0;
6        while(left<=right){
7            if(people[left]+people[right]<=limit){
8                boats++;
9                left++;
10                right--;
11                continue;
12            }else{
13            right--;
14            }
15            boats++;
16        }
17        return boats;
18    }
19};