class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());   // sort to handle duplicates
        vector<int> current;
        vector<vector<int>> storebig;
        solve(0, nums, current, storebig, target, nums.size());
        return storebig;
    }

    void solve(int index, vector<int>& nums, vector<int>& current,
               vector<vector<int>>& storebig, int target, int n) {
        
        if (target == 0) {   // found valid combination
            storebig.push_back(current);
            return;
        }
        if (index >= n || target < 0) return;  // base case

        // INCLUDE current element once
        current.push_back(nums[index]);
        solve(index + 1, nums, current, storebig, target - nums[index], n);
        current.pop_back();

        // EXCLUDE current element (skip all duplicates too)
        int next = index + 1;
        while (next < n && nums[next] == nums[index]) next++;
        solve(next, nums, current, storebig, target, n);
    }
};
