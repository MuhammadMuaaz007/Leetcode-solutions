class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num : nums) {
            if(num % 2 == 0) {
                freq[num]++;
            }
        }
        
        if(freq.empty()) return -1; // No even number found
        
        int ans = -1;
        int highestFreq = 0;
 
        for(auto &it : freq) {
            int number = it.first;
            int count = it.second;
            
            // Condition 1: bigger frequency
            // Condition 2: if same frequency, choose smaller number
            if(count > highestFreq || 
               (count == highestFreq && number < ans))
            {
                highestFreq = count;
                ans = number;
            }
        }
        
        return ans;
    }
};
