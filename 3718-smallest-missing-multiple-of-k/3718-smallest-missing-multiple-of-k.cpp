class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();

        vector<bool> exists(101, false);

        for (int i = 0; i < n; i++) {
            exists[nums[i]] = true;
        }

        int num = k;

        while (num < 101) {
            if (!exists[num]) {
                return num;
            }

            num = num + k;
        }

        return num;
    }
};