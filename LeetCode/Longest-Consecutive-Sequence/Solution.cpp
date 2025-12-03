class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end()); // insert all numbers at once
        int maxLen = 0;

        for(int n : numSet) {  // iterate only unique numbers
            if(numSet.find(n - 1) == numSet.end()) { // start of sequence
                int current = n;
                int length = 1;

                while(numSet.find(current + 1) != numSet.end()) {
                    current++;
                    length++;
                }

                maxLen = max(maxLen, length);
            }
        }

        return maxLen;
    }
};
