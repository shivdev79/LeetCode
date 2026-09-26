class Solution {
public:
    set<vector<int>> s; // moved to class level

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;
        getallcombinations(candidates, 0, target, ans, combination);
        return ans;
    }

    void getallcombinations(vector<int> &candidates, int index, int target,
                            vector<vector<int>> &ans, vector<int> &combination) {
        if (target == 0) {
            if (s.find(combination) == s.end()) {
                ans.push_back(combination);
                s.insert(combination);
            }
            return;
        }
        if (index >= candidates.size() || target < 0) {
            return;
        }

        // Include current number
        combination.push_back(candidates[index]);
        getallcombinations(candidates, index, target - candidates[index], ans, combination);
        combination.pop_back();

        // Skip current number
        getallcombinations(candidates, index + 1, target, ans, combination);
    }
};
