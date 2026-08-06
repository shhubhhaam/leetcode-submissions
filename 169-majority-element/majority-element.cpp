class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(auto i : nums) {
            mp[i]++;
        }

        for(auto& [num, freq] : mp) {
            if(freq > (nums.size()/2)) return num;
        }
        return -1;
    }
};