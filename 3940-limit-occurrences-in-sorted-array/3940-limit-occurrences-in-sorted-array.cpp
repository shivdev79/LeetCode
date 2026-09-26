class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        int cnt = 1;

        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) {
                cnt++;
            }
            else {
                cnt = 1;
            }

            if (cnt <= k) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};