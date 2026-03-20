class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<int> sorted = score; // copy array
        sort(sorted.begin(), sorted.end(), greater<int>()); // descending

        vector<string> result;

        for(int i = 0; i < score.size(); i++) {
            
            // find rank
            int rank = 0;
            for(int j = 0; j < sorted.size(); j++) {
                if(score[i] == sorted[j]) {
                    rank = j + 1;
                    break;
                }
            }

            // assign medals
            if(rank == 1) result.push_back("Gold Medal");
            else if(rank == 2) result.push_back("Silver Medal");
            else if(rank == 3) result.push_back("Bronze Medal");
            else result.push_back(to_string(rank));
        }

        return result;
    }
};
