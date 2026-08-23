class Solution {
public:

    vector<vector<int>> ans;
    vector<int> current;

    void solve(vector<int>& candidates, int target, int index) {

        if (target == 0) {
            ans.push_back(current);
            return;
        }

        if (target < 0)
            return;

        if (index == candidates.size())
            return;

        current.push_back(candidates[index]);

        solve(candidates, target - candidates[index], index);

        current.pop_back();

        solve(candidates, target, index + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        solve(candidates, target, 0);

        return ans;
    }
};