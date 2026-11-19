
class Solution {
public:

    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();

        if (n <= 1) {
            return nums;
        }

        // Step 1: Find minimum and maximum
        int mini = nums[0];
        int maxi = nums[0];

        for (int i = 1; i < n; i++) {

            if (nums[i] < mini) {
                mini = nums[i];
            }

            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }

        // Step 2: Create frequency array
        int range = maxi - mini + 1;

        vector<int> count(range, 0);

        // Step 3: Count occurrences
        for (int i = 0; i < n; i++) {
            count[nums[i] - mini]++;
        }

        // Step 4: Rebuild sorted array
        int index = 0;

        for (int i = 0; i < range; i++) {

            while (count[i] > 0) {

                nums[index] = i + mini;

                index++;
                count[i]--;
            }
        }

        return nums;
    }
};
