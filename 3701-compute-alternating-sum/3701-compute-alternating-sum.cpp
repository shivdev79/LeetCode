class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        // Odd indices → subtract
        for (int i = 1; i < n; i = i + 2) {
            sum -= nums[i];
        }

        int sum1 = 0;

        // Even indices → add
        for (int i = 0; i < n; i = i + 2) {
            sum1 += nums[i];
        }

        int z = sum1 + sum;

        return z;
    }
};