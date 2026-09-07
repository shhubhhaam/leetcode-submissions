class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int votes = 0, candidate = -1;

        for(auto i : nums) {
            if(votes == 0) {
                votes = 1;
                candidate = i;
            }

            else {
                if(candidate == i) votes++;
                else votes--;
            }
        }

        int count = 0;
        for(int i : nums) {
            if(i == candidate) count++;
        }

        if(count > nums.size()/2) return candidate;

        return -1;
    }
};