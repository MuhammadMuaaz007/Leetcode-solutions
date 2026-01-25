// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        while (low < high) {
            int mid = low + (high - low) / 2; //    int mid = (high + low) / 2; int low = 2,000,000,000;
// int high = 2,000,000,001;
// (low + high) = 4,000,000,001 → this overflows 32-bit int!
            if (isBadVersion(mid)) {
                high = mid; 
            } else {
                low = mid + 1; 
            }
        }
        return low;
    }
};
