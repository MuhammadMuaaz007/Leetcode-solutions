
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp; 
       
        for (int i = 0; i < nums.size(); i++) {
            int curVal=nums[i];
            // curVal+somevalue(think let x)=targer
           // somevalue=target-curVal
            int x = target - curVal; 
            // then i will check that the value exist in the map or not
            if (mpp.find(x) != mpp.end()) { //used != map.end  because when the x(key) not found the find return mpp.end()
                return {mpp[x], i};
            }
            mpp[curVal] = i;
        }
        return {}; 
    }
};